#include "Zombie.hpp"

int main(void)
{
    Zombie  *hordePtr;
    int     N;

    N = 10;
    hordePtr = zombieHorde(N, "zombie");

    for (int i = 0; i < N; i++)
        hordePtr[i].announce();
    delete [] hordePtr;
}