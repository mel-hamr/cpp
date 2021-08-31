#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    std::string new_str;

    Zombie *zombie = new Zombie[N];
    while (i < N)
    {
        new_str = name + std::to_string(i);
        zombie[i].get_name(new_str);
        zombie[i].announce();
        i++;
    }
    return zombie;
}