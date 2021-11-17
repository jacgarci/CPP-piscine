#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog class constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    delete brain;
    if (src.brain)
        brain = new Brain(*src.brain);
    else
        brain = nullptr;
}

Dog::~Dog()
{
    std::cout << "Dog class destructtor called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(Dog const &src)
{
    Animal::operator=(src);
    this->brain = src.brain;
    return (*this);
}

Brain const  *Dog::getBrain() const
{
    return (brain);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof Woof!" << std::endl;
}