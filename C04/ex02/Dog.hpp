#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:

    Brain *brain;

public:

    Dog();
    Dog(Dog const &src);
    virtual ~Dog();

    Dog &operator=(Dog const &rhs);

    Brain const *getBrain() const;

    void    makeSound(void) const;
};

#endif