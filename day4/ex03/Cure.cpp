#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other)
	: AMateria(other)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &other)
{
	AMateria::operator=(other);
	return(*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
