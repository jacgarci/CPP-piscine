#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat class constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat class destructtor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    Animal::operator=(src);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}