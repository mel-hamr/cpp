#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Form *f = new PresidentialPardonForm("hello","home");
        Bureaucrat b("nigga",5);
        b.signForm(*f);

        b.executeForm(*f);
        // std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }
    
}
