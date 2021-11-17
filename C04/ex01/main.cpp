#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    Cat basic;
    {
        Cat tmp = basic;
        Cat tmp2(basic);
        std::cout << basic.getBrain() << std::endl; 
        std::cout << tmp.getBrain() << std::endl;
        std::cout << tmp2.getBrain() << std::endl;
    }
    delete j;
    delete i;
}