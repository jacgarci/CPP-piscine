#include <iostream>
#include <stdlib.h>
#include <time.h>

class               Base{public: virtual ~Base(){};};
class   A : public  Base{};
class   B : public  Base{};
class   C : public  Base{};

class Base;
class A;
class B;
class C;

Base    *generate(void)
{
    Base    *basePtr;
    int     option;

    srand(time(0));
    option = (rand() % 3);
    switch (option)
    {
    case 0:
        basePtr = new A;
        break;
    
    case 1:
        basePtr = new B;
        break;
    
    default:
        basePtr = new C;
        break;
    }
    return basePtr;
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void   identify(Base &p)
{
    A   a;
    B   b;
    C   c;

    try
    {
        a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        
    }
    try
    {
        b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        
    }
    try
    {
        c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        
    }
}

int main()
{
    Base    *ptr = generate();
    Base    rfc = *ptr;

    identify(ptr);
    identify(rfc);
    delete ptr;
}