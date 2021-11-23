#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>

class ClapTrap
{
protected:

    std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    unsigned int    _atackDamage;

public:

    ClapTrap();
    ClapTrap(std::string const &name);
    ClapTrap(ClapTrap const &);
    virtual ~ClapTrap();

    std::string     getName(void) const;
    int             getHitPoints(void) const;
    int             getEnergyPoints(void) const;
    unsigned int    getAttackDamage(void) const;

    void    setHitPoints(int const hitPoints);
    void    setEnergyPoints(int const energyPoints);
    void    setAttackDamage(int const attackDamage);

    //void    setName(std::string const name);

    ClapTrap    &operator=(ClapTrap const &rhs);

    void    attack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};



#endif