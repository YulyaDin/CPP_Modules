#include "Zombie.hpp"

int main()
{
	Zombie stackZombie("StackZombie");
	stackZombie.announce();

	randomChump("Darik");

	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	randomChump("Lola");

	delete heapZombie;

	return 0;
}
