#include "AMateria.hpp"

AMateria::AMateria() : type(nullptr)
{
    std::cout << "Imateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "Imateria parameter constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void    AMateria::use(ICharacter &target)
{
    (void)target;
}