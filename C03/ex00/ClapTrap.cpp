#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(0), _hitPoints(0), _energyPoints(0), _atackDamage(0)
{
    std::cout << "\nSucces creating an useless CL4P-TP;";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _atackDamage(0)
{
    std::cout 
    << "Success creating " << this->getName() << "  CL4P-TP" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
    std::cout
    << "Success creating " << this->getName() << "  CL4P-TP" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout
    << this->getName() << " says: \"Oh crap\". Before leaving" << std::endl;
}

//G/S
std::string     ClapTrap::getName() const
{
    return (this->_name);
}

int             ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int             ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

unsigned int    ClapTrap::getAttackDamage(void) const
{
    return (this->_atackDamage);
}

void    ClapTrap::setHitPoints(int const hitPoints)
{
    this->_hitPoints = hitPoints;
}

void    ClapTrap::setEnergyPoints(int const energyPoints)
{
    this->_energyPoints = energyPoints;
}

//Asigment operator
ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs)
{
    this->_name = rhs.getName();
    this->_hitPoints = rhs.getHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_atackDamage = rhs.getAttackDamage();
    return (*this);
}

//Other fucntions
void    ClapTrap::attack(std::string const &target)
{
    if (this->_energyPoints > 0)
    {
        std::cout
        << "CL4P-TP " << this->getName() << " attack "
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

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout
    << "CL4P-TP " << this->getName() << " get attacked reciving "
    << amount << " points damage" << std::endl;
    this->setHitPoints(this->getHitPoints() - amount);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout
    << "CL4P-TP " << this->getName() << " is being repared for "
    << amount << " HP " << std::endl;
    this->setHitPoints(this->getHitPoints() + amount);
}
























