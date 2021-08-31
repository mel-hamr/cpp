#include "zombie.cpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie;

    zombie->get_name(name);
    return (zombie);
}