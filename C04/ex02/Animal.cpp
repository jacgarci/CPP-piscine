#include "Animal.hpp"

Animal::Animal() : type(std::string())
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor with parameter called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal class destructor called" << std::endl;
}


Animal  &Animal::operator=(Animal const &rhs)
{
    this->type = rhs.type;
    return (*this);
}