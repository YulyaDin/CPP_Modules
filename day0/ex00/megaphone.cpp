#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; i ++)
		{
			for (int j = 0; j < (int)strlen(av[i]); j += 1)
			{
				std::cout << (char)toupper(av[i][j]);
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
