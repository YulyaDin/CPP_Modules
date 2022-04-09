#pragma once

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &other);
	virtual ~AMateria();

	AMateria &operator=(AMateria const &other);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	unsigned int _xp;
	std::string _type;
};
