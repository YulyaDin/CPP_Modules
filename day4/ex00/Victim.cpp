#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other)
{
	_name = other._name;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
	return _name;
}

void Victim::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a cute little sheep!" << std::endl;
}

Victim &Victim::operator=(Victim const &other)
{
	_name = other._name;
	return(*this);
}

std::ostream& operator<<(std::ostream& os, const Victim& vic)
{
    os << "I'm " << vic.getName() << " and I like otters!" << std::endl;
    return os;
}
