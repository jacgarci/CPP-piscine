#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
private:

    

protected:
    
    std::string type;

public:

    Animal();
    Animal(std::string type);
    Animal(Animal const &src);
    virtual ~Animal();

    std::string getType(void) const;

    Animal  &operator=(Animal const &rhs);

    virtual void    makeSound(void) const;
};

#endif