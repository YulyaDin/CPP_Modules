#pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &other);
	~RadScorpion();

	RadScorpion &operator=(RadScorpion const &other);
};
