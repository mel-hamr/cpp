#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("hamid",151);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }

    try
    {
        Bureaucrat b("saad",1);
        b.Increment();
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }

        try
    {
        Bureaucrat b("hamid",0);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }

    try
    {
        Bureaucrat b("saad",150);
        b.Decrement();
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }
    
}
