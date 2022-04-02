#include "Karen.hpp"

#include <iostream>

int main(int ac, char **av)
{
	Karen karen;
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	karen.complain(av[1]);
	return (0);
}
