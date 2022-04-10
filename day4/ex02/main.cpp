#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	std::cout << "units count: " << vlc->getCount() << std::endl;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	vlc->push(jim);

	std::cout << "units count: " << vlc->getCount() << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	ISquad* anotherVlc = new Squad(*(Squad* )vlc);

	delete vlc;

	anotherVlc->getUnit(-2);
	anotherVlc->getUnit(10);

	std::cout << "units count: " << anotherVlc->getCount() << std::endl;

	for (int i = 0; i < anotherVlc->getCount(); ++i)
	{
		ISpaceMarine* cur = anotherVlc->getUnit(i);
		std::cout << i << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete anotherVlc;

	return 0;
}
