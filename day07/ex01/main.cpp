#include "iter.hpp"
#include <iostream>


int main()
{
    char str[8]= {'m','o','h','a','m','m','e','d'};
    iter(str,8,ft_print);

    int i[8]= {1,2,3,4,5,6,7,8};
    iter(i,8,ft_print);
    return (0);
}