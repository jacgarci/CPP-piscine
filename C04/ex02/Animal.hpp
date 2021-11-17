#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    
    std::string type;

public:

    Animal();
    Animal(std::string type);
    Animal(Animal const &src);
    virtual ~Animal();

    Animal  &operator=(Animal const &rhs);

    virtual void    makeSound(void) const = 0;
};

#endif