#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstring>

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif