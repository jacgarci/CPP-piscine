#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
private:

    

protected:
    
    std::string type;

public:

    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &src);
    ~WrongAnimal();

    std::string getType(void) const;

    WrongAnimal  &operator=(WrongAnimal const &rhs);

    void    makeSound(void) const;
};

#endif