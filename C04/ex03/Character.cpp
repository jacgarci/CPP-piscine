#include "Character.hpp"

Character::Character() : _name(nullptr)
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
}

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "Character parameter constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
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
    //Podria quitarlo y poner *this = src al haber puesto lo mismo en operator=??
    //hacer pruba en el main
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    for (int i = 0; i < 4; i++)
            inventory[i] = src.inventory[i]->clone();
    std::cout << "Character copy constructor called" << std::endl;
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
        if (!inventory[i])
            inventory[i] = m;
}

void    Character::unequip(int index)
{
    if (index >= 0 && index < 4)
        if (inventory[index])
            inventory[index] = nullptr;
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
    this->_name = rhs._name;
    //Probar el operador en main para ver si delete da fallo
    for (int i = 0; i < 4; i++)
        delete inventory[i];
     for (int i = 0; i < 4; i++)
         inventory[i] = rhs.inventory[i]->clone();
    return (*this);
}