#pragma once

#include <string>

class AWeapon
{
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &other);
	virtual ~AWeapon();

	AWeapon &operator=(AWeapon const &other);

	virtual std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

protected:
	std::string _name;
	int	_damage;
	int _apcost;
};
