#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &other);
	~Ice();

	Ice &operator=(Ice const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
};
