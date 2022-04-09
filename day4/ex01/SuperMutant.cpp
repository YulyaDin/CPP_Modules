#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() :
	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(other)
{}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	Enemy::operator=(other);
	return(*this);
}

void SuperMutant::takeDamage(int hp)
{
	hp = hp - 3;
	return Enemy::takeDamage(hp);
}
