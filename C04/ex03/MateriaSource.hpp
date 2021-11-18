#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    
    AMateria    *spells[4];

public:

    MateriaSource();
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();

    void        learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);

    MateriaSource &operator=(MateriaSource const &rhs);

};

#endif