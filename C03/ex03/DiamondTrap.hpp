#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
   
    std::string _name;

public:

    DiamondTrap();
    DiamondTrap(std::string const &name);
    DiamondTrap(DiamondTrap const &src);
    ~DiamondTrap();

    DiamondTrap &operator=(DiamondTrap const &rhs);

    void    attack(std::string const &target);
    void    whoAmI() const;
};



#endif