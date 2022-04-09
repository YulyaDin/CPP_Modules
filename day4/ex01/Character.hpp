#pragma once

#include <string>
#include <iostream>
#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(std::string const & name);
	Character(Character const &other);
	~Character();

	Character &operator=(Character const &other);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	int getAP() const;
	std::string getName() const;
	AWeapon* getWeapon() const;

private:
	std::string	_name;
	int _ap;
	AWeapon *_weapon;
};

std::ostream& operator<<(std::ostream& os, const Character& character);
