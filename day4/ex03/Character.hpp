#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(Character const &other);
	virtual ~Character();

	Character &operator=(Character const &other);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string _name;
	int _counter;
	AMateria* _inventory[4];
};
