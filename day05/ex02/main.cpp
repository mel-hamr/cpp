#include "Bureaucrat.hpp"

#include "Form.hpp"
int main()
{
    try
    {
        Form f("req",50,25);
        Bureaucrat b("nigga",50);
        // b.Increment();
        b.signForm(f);
        b.signForm(f);

        // std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }
    
}
