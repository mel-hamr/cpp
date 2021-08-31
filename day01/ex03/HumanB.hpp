#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string name;
        Weapon weapon;
    public:
    HumanB(std::string name)
    {
        this->name = name;
    }
        void    get_name(std::string name);
        void    setWeapon(std::string weapon);
        void    attack(void);
};
