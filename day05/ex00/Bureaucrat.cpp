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

int Bureaucrat::getGrade() const
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

const char * Bureaucrat::GradeTooHighException::what()const throw()
{
    return ("The Grade is Too high . Try again !!\n");
}

const char * Bureaucrat::GradeTooLowException::what()const throw()
{
    return ("The Grade is Too Low . Try again !!\n");
}
