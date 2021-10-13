#include "Form.hpp"

Form::Form() : Name("bureau") , Grade_to_sign(150) , Grade_to_execute(150)
{
    this->Signed = false;
}

Form::Form(std::string name , int grade_to_sign , int grade_to_execute) : Name(name) , Grade_to_sign(grade_to_sign) , Grade_to_execute(grade_to_execute)
{
    if(Grade_to_execute > 150 || grade_to_sign > 150)
		throw lesser;
	if (Grade_to_execute < 1 || grade_to_sign < 1)
		throw higher;
    this->Signed = false;
}

Form::~Form()
{
    ;
}
Form::Form(const Form &copy) : Name(copy.Name) , Grade_to_sign(copy.Grade_to_sign) , Grade_to_execute(copy.Grade_to_execute)
{
    this->Signed = copy.Signed;
}

Form & Form::operator=(const Form &rhs)
{
    this->Signed = rhs.Signed;
    return (*this);
}

const std::string Form::getName()
{
    return (Name);
}
const int Form::getGradeToSign()
{
    return (Grade_to_sign);
}
const int Form::getGradeToExecute()
{
    return (Grade_to_execute);
}
const int Form::getSign()
{
    return (Signed);
}
void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= this->Grade_to_sign)
        this->Signed = true;
    else
        throw lesser;
}
std::ostream & operator<<(std::ostream & out,Form  &a)
{
	out << a.getName() << " Form status " << a.getSign() << " Grade to sign" <<  a.getGradeToSign() << " Grade to execute "
    << a.getGradeToExecute() <<std::endl;
	return(out);
}