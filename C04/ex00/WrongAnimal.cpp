#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type(std::string())
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal constructor with parameter called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal class destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}


WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout <<  type << " sounds" << std::endl;
}