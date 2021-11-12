#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:

    std::string _name;
    Weapon      &_weapon;

public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    std::string     getName(void) const;
    Weapon const    &getWeapon(void) const;
    void            attack(void);
};

#endif