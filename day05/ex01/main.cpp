#include "Bureaucrat.hpp"

#include "Form.hpp"
int main()
{
    try
    {
        Form f("ID_FORM",50,25);
        Bureaucrat b("Hamid",51);
        b.signForm(f);

        std::cout << f ;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }

    try
    {
        Form f("passport",20,25);
        Bureaucrat b("Hamid",50);
        b.signForm(f);
        
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }
}
