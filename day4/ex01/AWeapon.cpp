#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name), _damage(damage), _apcost(apcost)
{
}

AWeapon::AWeapon(AWeapon const &other)
{
	_name = other._name;
	_damage = other._damage;
	_apcost = other._apcost;
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	_name = other._name;
	_damage = other._damage;
	_apcost = other._apcost;
	return(*this);
}

std::string AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}
