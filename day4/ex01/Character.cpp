#include "Character.hpp"

Character::Character(std::string const & name) :
	_name(name), _ap(40), _weapon(nullptr)
{}

Character::Character(Character const &other)
{
	_name = other._name;
    _ap = other._ap;
    _weapon = other._weapon;
}

Character::~Character()
{
}

Character &Character::operator=(Character const &other)
{
	_name = other._name;
    _ap = other._ap;
    _weapon = other._weapon;
	return(*this);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
	{
		_ap = 40;
	}
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (_weapon)
	{
		std::cout << getName() << " attacks " << enemy->getType() << " with a "
			<< _weapon->getName() << std::endl;
		_ap -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());
		_weapon->attack();
		if (enemy->getHP() <= 0)
		{
			delete enemy;
		}
	}
}

std::string Character::getName() const
{
	return _name;
}

AWeapon* Character::getWeapon() const
{
	return _weapon;
}

int Character::getAP() const
{
	return _ap;
}

std::ostream& operator<<(std::ostream& os, const Character& character)
{
	AWeapon* wep = character.getWeapon();
	if (wep != nullptr)
	{
		os << character.getName() << " has " << character.getAP() << " AP and wields a " 
			<< wep->getName() << std::endl;
	}
	else
	{
	    os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	}
	return os;
}
