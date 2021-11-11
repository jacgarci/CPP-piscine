#include "Zombie.hpp"

int main(void)
{
    Zombie zombie;
	Zombie *zombieHeap;

	zombieHeap = zombie.newZombie("Heap");
	zombieHeap->announce();
	zombie.randomChump("Stack");
	delete (zombieHeap);
}