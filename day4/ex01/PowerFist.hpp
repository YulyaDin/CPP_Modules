#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &other);
	~PowerFist();

	PowerFist &operator=(PowerFist const &other);
	void attack() const;
};
