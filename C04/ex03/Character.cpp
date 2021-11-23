#include "Character.hpp"

Character::Character() : _name(std::string())
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "Character parameter constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
}
//Deleting a null pointer has no effect, 
//so it is not necessary to check for a null pointer before calling delete.
Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

Character::Character(Character const &src) : _name(src._name)
{
    
    for (int i = 0; i < 4; i++)
        inventory[i] = 0;
    *this = src;
    std::cout << "Character copy constructor called" << std::endl;
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int index)
{
    if (index >= 0 && index < 4)
        if (inventory[index])
            inventory[index] = 0;
}

//Not need to check target, references always refence to something
void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
        if (inventory[idx])
            inventory[idx]->use(target);
}

Character   &Character::operator=(Character const &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    for (int i = 0; i < 4; i++)
        if (rhs.inventory[i] != 0)
            this->inventory[i] = rhs.inventory[i]->clone();
    return (*this);
}