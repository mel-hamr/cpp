#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	;
}
Bureaucrat::Bureaucrat(const std::string name, int grade):Name(name)
{
    if(grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->Grade = grade;
}
Bureaucrat::~Bureaucrat()
{
	;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy): Name(copy.Name)
{
	this->Grade = copy.Grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs) 
{
	this->Grade =  rhs.Grade;
	return *this;
}

const std::string Bureaucrat::getName()
{
	return (this->Name);
}

const int Bureaucrat::getGrade() const 
{
	return (this->Grade);
}

void	Bureaucrat::Increment()
{
	if (this->Grade == 1)
		throw GradeTooHighException();
	this->Grade--;
}
void	Bureaucrat::Decrement()
{
	if (this->Grade == 150)
		throw GradeTooLowException();
	this->Grade++;
}

std::ostream & operator<<(std::ostream & out,Bureaucrat  &a)
{
	out << a.getName() << " Bureaucrat Grade " << a.getGrade() << std::endl;
	return(out);
}
void	Bureaucrat::signForm(Form &form)
{
	if(form.getSign() == 0)
	{
		form.beSigned(*this);
		std::cout << this->Name << " signs " << form.getName() <<std::endl;
	}
	else
		std::cout << this->Name << " cannot signs " << form.getName() << " because it is already signed "<<std::endl;
		
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->Name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}