#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &other);
	~SuperMutant();

	SuperMutant &operator=(SuperMutant const &other);
	void takeDamage(int hp);
};
