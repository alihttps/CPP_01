#include "Zombie.hpp"

int main ()
{
    Zombie *new_zombie;
    randomChump("larry");
    new_zombie = newZombie("hmed");
    new_zombie->announce();
    delete new_zombie;
}