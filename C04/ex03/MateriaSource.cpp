#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        spells[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
        delete spells[i];
    for (int i = 0; i < 4; i++)
         spells[i] = src.spells[i]->clone();
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete spells[i];
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!spells[i])
        {
            spells[i] = m;
            return ;
        }
    }

}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (type == spells[i]->getType())
            return (spells[i]->clone());
    return (0);
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &rhs)
{
    for (int i = 0; i < 4; i++)
        delete spells[i];
    for (int i = 0; i < 4; i++)
         spells[i] = rhs.spells[i]->clone();
    return (*this);
}