#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("nigga",150);
        b.Increment();
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() ;
    }
    
}
