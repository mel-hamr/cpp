#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
private:
public:
	Form *RobotMyRequest(std::string form_name, std::string target);
	Form *PresidentialPardon(std::string form_name, std::string target);
	Form *Shrubbery(std::string form_name, std::string target);
	Form *makeForm(std::string form_name, std::string target);
	Intern();
	Intern(const Intern &);
	Form &operator=(const Form &);
	~Intern();
	class UnknownFormExeception : public std::exception
	{
		virtual const char *what() const throw();
	};
};



#endif