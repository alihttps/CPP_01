#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cerr << "Error: Number of zombies must be positive." << std::endl;
        exit(1);
    }
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return zombies;
}
