#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), weapon(NULL)
{
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon to attack with" << std::endl;
}
HumanB::~HumanB()
{
}