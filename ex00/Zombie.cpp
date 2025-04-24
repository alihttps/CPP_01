#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
}
