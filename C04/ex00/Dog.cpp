#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog class constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog class destructtor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    Animal::operator=(src);
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof!" << std::endl;
}