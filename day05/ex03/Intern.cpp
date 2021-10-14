#include "Intern.hpp"

Intern::Intern()
{
}

Form *Intern::RobotMyRequest(std::string form_name, std::string target)
{
	Form *ret = new RobotomyRequestForm(target, form_name);
	return (ret);
}

const char *Intern::UnknownFormExeception::what() const throw()
{
	return "Unknown Name Form";
}

Form *Intern::PresidentialPardon(std::string form_name, std::string target)
{
	Form *ret = new PresidentialPardonForm(target, form_name);
	return (ret);
}

Form *Intern::Shrubbery(std::string form_name, std::string target)
{
	Form *ret = new ShrubberyCreationForm(target, form_name);
	return (ret);
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	// typedef Form *(Intern::*Forms)(std::string, std::string);
	Form *(Intern::*forms[3])(std::string,std::string) = {&Intern::RobotMyRequest, &Intern::PresidentialPardon, &Intern::RobotMyRequest};
	std::string names[3] = {"RobotMy Request", "Presidential Pardon", "Shrubbery Creation"};

	for (size_t i = 0; i < 3; i++)
	{
		if (names[i] == form_name)
			return ((this->*forms[i])(form_name, target));
	}
	throw UnknownFormExeception();
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Form &Intern::operator=(const Form &rhs)
{
	;
}

Intern::~Intern()
{
}