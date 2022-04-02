#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Didi("Didi");
	
	Didi.whoAmI();
	Didi.attack("someone");
	Didi.takeDamage(10);
	Didi.beRepaired(20);
	return(0);
}
