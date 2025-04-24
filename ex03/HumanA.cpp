#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), weapon(weapon)
{
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
