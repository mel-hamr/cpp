#include "span.hpp"

int main()
{
    Span sp = Span(5);
<<<<<<< HEAD
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << sp.shortestSpan() << " : this is shorest span is " << std::endl;
        std::cout << sp.longestSpan() << " : this is longest span is "  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    Span test= Span(15000);

    std::vector<int> v;
    for ( int i = 0 ; i <= 15000 ; i++)
    {
        v.push_back(i);
    }
    try
    {
        test.addNumber(v.begin() , v.end());
    }
    catch ( std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
    try
    {
        std::cout << test.shortestSpan() << " : this is shorest span " << std::endl;
        std::cout << test.longestSpan() << " : this is longest span "  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

=======
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
>>>>>>> 343becd5283d9dcc4e3d2804482b932514725e6e
}