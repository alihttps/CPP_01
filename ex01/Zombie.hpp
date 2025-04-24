#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstring>
#include <cstdlib>

class Zombie
{
    private:
        std::string _name;
    public:
        void set_name(std::string name);
        void announce( void );
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif