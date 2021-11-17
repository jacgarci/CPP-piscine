#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *a = new Animal();
    Animal *b = new Animal("Horse");
    Animal *c = new Dog();
    Animal *d = new Cat();
    

    a->makeSound();
    b->makeSound();
    c->makeSound();
    d->makeSound();
    
    delete a;
    delete b;
    delete c;
    delete d;

    WrongAnimal *wa = new WrongAnimal("Cow");
    WrongAnimal *wd = new WrongCat();

    wa->makeSound();
    wd->makeSound();

    delete wa;
    delete wd;
}