#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat class constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    delete brain;
    if (src.brain)
        brain = new Brain(*src.brain);
    else
        brain = nullptr;
}

Cat::~Cat()
{
    std::cout << "Cat class destructtor called" << std::endl;
    delete this->brain;
}

Brain const  *Cat::getBrain() const
{
    return (brain);
}

Cat &Cat::operator=(Cat const &src)
{
    Animal::operator=(src);
    this->brain = src.brain;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}