#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::~HumanB(void)
{

}

std::string HumanB::getName(void) const
{
    return (this->_name);
}

Weapon *HumanB::getWeapon(void) const
{
    return (this->_weapon);
}

void    HumanB::attack(void)
{
    std::cout 
    << this->getName() << " attacks with his " << this->getWeapon()->getType()
    << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}