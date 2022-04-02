#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clapTrap("Clappy");
	ScavTrap scavTrap("Scavvy");

	ScavTrap otherScavTrap = scavTrap;

	clapTrap.attack("target");
	scavTrap.attack("scavTrap target");
	scavTrap.guardGate();
}
