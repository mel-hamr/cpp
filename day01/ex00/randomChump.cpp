#include "newZombie.cpp"

void randomChump(std::string name)
{
    Zombie *Zombie;

    Zombie = newZombie(name);
    Zombie->announce();
    return;
}