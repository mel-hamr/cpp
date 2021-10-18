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
	Form *RobotMyRequest(std::string target);
	Form *PresidentialPardon(std::string target);
	Form *Shrubbery(std::string target);
	Form *makeForm(std::string form_name, std::string target);
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	~Intern();
	class UnknownFormExeception : public std::exception
	{
		virtual const char *what() const throw();
	};
};



#endif