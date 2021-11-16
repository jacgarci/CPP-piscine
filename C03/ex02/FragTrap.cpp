#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << " is a FR4G-TR4P btw" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_atackDamage = 30;
    std::cout << " is a FR4G-TR4P btw" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << " is a FR4G-TR4P btw" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP ";
}

FragTrap    &FragTrap::operator=(FragTrap const &rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_atackDamage = rhs._atackDamage;
    return (*this);
}

void    FragTrap::attack(std::string const &target)
{
    if (this->_energyPoints > 0)
    {
        std::cout
        << "FR4G-TP " << this->getName() << " attack "
        << target << " CL4P-TP "<< ", causing " 
        << this->getAttackDamage()
        << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout
        << "FR4G-TP " << this->getName() 
        << " have not enough energy to attack"  << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FR4G-TP: high five guys!!!!" << std::endl;
}