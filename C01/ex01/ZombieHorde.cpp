#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *hordePtr;
    std::string aux;

    if (N < 1)
    {
        std::cout << "Invalid number argument, returning NULL" << std::endl;
        return (0);
    }

    hordePtr = new Zombie[N];
    aux = name;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            hordePtr[i].setName(name.append(" Even"));
        else
            hordePtr[i].setName(name.append(" Odd"));
        name = aux;
    }
    return (hordePtr);
}