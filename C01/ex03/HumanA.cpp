#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

std::string     HumanA::getName(void) const
{
    return (this->_name);
}

Weapon const    &HumanA::getWeapon(void) const
{
    return (this->_weapon);
}

void    HumanA::attack(void)
{
    std::cout 
    << this->getName() << " attacks with his " << this->getWeapon().getType()
    << std::endl;
}

