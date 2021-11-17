#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = std::string("Some random idea");
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain   &Brain::operator=(Brain const &rhs)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.ideas[i];
    return (*this);
}

