#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << std::endl;
		std::cout << robert << jim << joe;

		robert.polymorph(jim);
		robert.polymorph(joe);

		std::cout << std::endl;

		std::cout << "Test copy and assign" << std::endl;

		Sorcerer copy(robert);
		Sorcerer assign("Lilu", "the Saver");

		std::cout << copy << assign << std::endl;
		
		assign = robert;

		std::cout << copy << assign << std::endl;
	}

	std::cout << std::endl;

	{
		Peon marta("Marta");
		Peon judi("Judi");

		judi = marta;

		std::cout << std::endl;

	}

	return 0;
}
