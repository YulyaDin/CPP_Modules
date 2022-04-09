#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &other);
	~PlasmaRifle();

	PlasmaRifle &operator=(PlasmaRifle const &other);
	void attack() const;
};
