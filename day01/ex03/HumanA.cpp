#include "HumanA.hpp"

void    HumanA::get_name(std::string    name)
{
    this->name = name;
    return;
}
void    HumanA::get_weapon(std::string    name)
{
    this->weapon = name;
    return;
}
void   HumanA::attack()
{
    std::cout << this->name <<" attacks with his " << this->weapon << std::endl;
    return ;
}