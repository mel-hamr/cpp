#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP


#include <list>
#include <iostream>
#include <algorithm>

template<typename T>

bool    easyfind(T container, int occurance)
{
    if(std::find(container.begin() , container.end() , occurance) != container.end())
        return true;
    return false;
}

#endif