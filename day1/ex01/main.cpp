#include "Zombie.hpp"
#include <iostream>

int main()
{
	int N = 7;

	Zombie *horde = zombieHorde(N, "Zombie");

	for (int i = 0; i < N; ++i)
	{
		std::cout << "[" << i + 1 << "] ";
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
