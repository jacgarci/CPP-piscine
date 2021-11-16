#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    std::cout << " is a SC4V-TR4P btw" << std::endl;
}

ScavTrap::ScavTrap(std::string  const &name) : ClapTrap(name)
{
    std::cout << " is a SC4V-TR4P btw" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_atackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << " is a SC4V-TR4P btw" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TR4P ";
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &rhs)
{
    this->_name = rhs.getName();
    this->_hitPoints = rhs.getHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_atackDamage = rhs.getAttackDamage();
    return (*this);
}

void    ScavTrap::attack(std::string const &target)
{
    if (this->_energyPoints > 0)
    {
        std::cout
        << "SC4V-TP " << this->getName() << " attack "
        << target << " CL4P-TP "<< ", causing " 
        << this->getAttackDamage()
        << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout
        << "CL4P-TP " << this->getName() 
        << " have not enough energy to attack"  << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout
    << "ScavTrap activate Guard Keeper mode" << std::endl;
}