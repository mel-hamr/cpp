#include "HumanB.hpp"

void    HumanB::get_name(std::string    name)
{
    this->name = name;
    return;
}
void    HumanB::setWeapon(std::string    name)
{
    this->weapon = name;
    return;
}
void   HumanB::attack()
{
    std::cout << this->name <<" attacks with his " << this->weapon.getType() << std::endl;
    return ;
}