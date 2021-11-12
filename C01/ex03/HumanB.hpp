#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:

    std::string _name;
    Weapon      *_weapon;

public:

    HumanB(std::string name);
    ~HumanB();

    std::string     getName(void) const;
    Weapon          *getWeapon(void) const;
    void            setWeapon(Weapon &weapon);
    void            attack(void);
};

#endif