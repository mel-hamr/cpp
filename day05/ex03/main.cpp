#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Form *f;
        Intern i;

        f = i.makeForm("RobotoMy Request", "bender");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Form *f;
        Intern i;

        f = i.makeForm("Shrubbery Creation", "bender");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Form *f;
        Intern i;

        f = i.makeForm("Presidential Pardon", "bender");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    // "RobotoMy Request", "Presidential Pardon", "Shrubbery Creation"
}
