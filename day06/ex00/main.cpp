#include "Data.hpp"
#include <iostream>
#include "Data.hpp"


int main(int ac , char **av)
{
    if(ac != 2)
    {
        std::cout << "invalide arguments" <<std::endl;
        return 0;
    }
    Data    data(av[1]);
    if(data.check_error() == 1)
    {
        std::cout << "invalide Type" <<std::endl;
        return 0;
    }
    data.Parsetype();
    data.SetTypes();
    data.printTypes();
}
// nigga nay nigga nay nay nigga nigga nay nay nay nigga nay nay nigga nigga nay nay