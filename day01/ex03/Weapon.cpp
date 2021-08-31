#include "Weapon.hpp"

void    Weapon::setType(std::string type)
{
    this->type = type;
    return;
}

std::string Weapon::getType()
{
    return(this->type);
}