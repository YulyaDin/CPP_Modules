#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name) :
	Victim(name),
	_name(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(Peon const &other) :
	Victim(other)
{}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &other)
{
	Victim::operator=(other);
	return(*this);
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}
