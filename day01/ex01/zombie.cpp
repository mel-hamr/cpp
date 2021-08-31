#include "Zombie.hpp"


class Zombie {

    private :
        std::string name;
    public :
    void    announce();
    void    get_name(std::string name);
};

void    Zombie::get_name(std::string    name)
{
    this->name = name;
    return;
}

void   Zombie::announce()
{
    std::cout << this->name <<" BraiiiiiiinnnzzzZ" << std::endl;
    return ;
}