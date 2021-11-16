#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << " is a D14MXND-TR4P btw" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_atackDamage = 30;
    std::cout << " is a D14MXND-TR4P btw" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
{
    std::cout << " is a D14MXND-TR4P btw" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "D14MXND-TP ";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() const
{
    std::cout 
    << "DiamondTrap name: " << _name 
    << ". CL4P_TP name: " << ClapTrap::getName()
    << std::endl;
}