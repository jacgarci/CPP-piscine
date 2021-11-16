#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
    ScavTrap();

public:

    ScavTrap(std::string const  &name);
    ScavTrap(ScavTrap const  &src);
    ~ScavTrap();

    ScavTrap    &operator=(ScavTrap const &rhs);

    void    attack(std::string const &target);
    void    guardGate(void);

};


#endif