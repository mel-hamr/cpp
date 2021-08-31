#include "phone.book.hpp"

std::string ft_trim(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\t')
            str[i] = ' ';
        i++;
    }
    i = 0;
    while (!str.empty() && isspace(str.front()))
        str.erase(0, 1);
    while (!str.empty() && isspace(str.back()))
        str.erase(str.size() - 1, 1);
    i = 0;
    while (str[i])
    {
        if ( str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }else
            i++;
    }
    return (str);
}

std::string ft_lenght(std::string str)
{
    size_t i;

    i = 10;
    if (str.length() > 10)
    {
        str[9] = '.';
        while (i < str.length())
            str[i++] = '\0';
    }
    return (str);
}

void print_info(std::string first_name, std::string last_name, std::string nick_name)
{
    int i;

    i = 0;
    std::cout << std::setw(10) << first_name;
    std::cout << "|";
    std::cout << std::setw(10) << last_name;
    std::cout << "|";
    std::cout << std::setw(10) << nick_name << std::endl;
}