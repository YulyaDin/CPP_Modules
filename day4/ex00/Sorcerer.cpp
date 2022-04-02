#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	_name = other._name;
	_title = other._title;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!"
		<< std::endl;
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	_name = other._name;
	_title = other._title;
	return(*this);
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& sor)
{
    os << "I am " << sor.getName() << ", "<< sor.getTitle() << ", and I like ponies!" << std::endl;
    return os;
}
