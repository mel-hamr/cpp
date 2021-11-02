#include "function.hpp"


int main()
{
    int i=9;
    int j=2;
    swap(i,j);
    std::cout << i << " " << j << std::endl;
    std::cout << "max is : " << max(i,j) << std::endl;
    std::cout << "min is : " << min(i,j) << std::endl;

    char c='a';
    char v='z';
    swap(c,v);
    std::cout << c << " " << v << std::endl;
    std::cout << "max is : " << max(c,v) << std::endl;
    std::cout << "min is : " << min(c,v) << std::endl;
    return (0);
}