#include <iostream>
#include "Weapon.hpp"
class HumanA
{
private:
    std::string name;
    Weapon weapon;
public:
    HumanA(std::string  name, Weapon  weapon_name)
    {
        this->name = name;
        weapon = weapon_name;
    }
    void    get_name(std::string name);
    void    get_weapon(std::string weapon);
    void    attack(void);
};
