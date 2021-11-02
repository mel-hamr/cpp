#ifndef  ITER_HPP
#define ITER_HPP

#include <iostream>


template<typename T>
void    iter(T *array,int lenght, void (fun)(T const &c))
{
    for(int i= 0; i < lenght ; i++)
        fun(array[i]);
}

template <typename T>
void ft_print(T const &c)
{
    std::cout << c ;
}

#endif