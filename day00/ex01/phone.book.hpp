#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "contact.class.hpp"
#include <iostream>
#include <iomanip>


class   phonebook
{
    public :
    int index;
    std::string choice;
    contact contact[8];

};

std::string ft_trim(std::string str);
std::string ft_lenght(std::string str);
void print_info(std::string first_name, std::string last_name, std::string nick_name);
#endif