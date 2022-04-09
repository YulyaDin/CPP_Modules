#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &other)
	: AMateria(other)
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &other)
{
	AMateria::operator=(other);
	return(*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName()  << " *" << std::endl;
}
