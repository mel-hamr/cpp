#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Form *f = new PresidentialPardonForm("home");
        Bureaucrat b("vice President",5);
        b.signForm(*f);
        b.executeForm(*f);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }

    try
    {
        Form *f = new RobotomyRequestForm("home");
        Bureaucrat b("engineer",70);
        b.signForm(*f);
        b.executeForm(*f);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }

    try
    {
        Form *f = new ShrubberyCreationForm("home");
        Bureaucrat b("Hamid",140);
        b.signForm(*f);
        b.executeForm(*f);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }
    
}
