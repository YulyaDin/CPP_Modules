#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap("Guy");
	FragTrap otherFragTrap = fragTrap;	
	
	fragTrap.highFivesGuys();
	otherFragTrap.highFivesGuys();
	fragTrap.attack("otherFragTrap");
	fragTrap.beRepaired(10);
	return (0);
}
