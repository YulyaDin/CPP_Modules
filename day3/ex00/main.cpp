#include "ClapTrap.hpp"

int main()
{
	ClapTrap beatifulClapTrap("Cool Cool Guy");
	ClapTrap anotherClapTrap = beatifulClapTrap;
	ClapTrap *noNameClapTrap = new ClapTrap();
	beatifulClapTrap.attack("Bad Bad Enemy");
	noNameClapTrap->attack("Cool Cool Guy");
	delete noNameClapTrap;
	beatifulClapTrap.takeDamage(10);
	beatifulClapTrap.beRepaired(15);
	anotherClapTrap.attack("Not so bad Enemy");
}
