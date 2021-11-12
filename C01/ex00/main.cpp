#include "Zombie.hpp"

int main(void)
{
    Zombie	*zombiePtr[2];

	randomChump("First stack zombie");
	zombiePtr[0] = newZombie("First heap Zombie");
	zombiePtr[0]->announce();
	randomChump("Second stack zombie");
	zombiePtr[1] = newZombie("Second heap Zombie");
	zombiePtr[1]->announce();
	
	for (int i = 0; i < 2; i++)
		delete (zombiePtr[i]);
}