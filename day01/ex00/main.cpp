// #include "zombie.cpp"
#include "newZombie.cpp"
int main()
{
    Zombie *zombie;

    zombie = newZombie("hmida");
    zombie->announce();
}