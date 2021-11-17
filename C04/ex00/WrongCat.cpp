#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat class constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class destructtor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    WrongAnimal::operator=(src);
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}