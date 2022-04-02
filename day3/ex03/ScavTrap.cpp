#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	m_name = name;
	m_hitpoints = 100;
	m_energy_points = 50;
	m_damage = 20;
	std::cout << "ScavTrap user constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{}

int ScavTrap::getEnergyPoints()
{
	return m_energy_points;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap <" << m_name << "> attacks " << target <<
        " causing " << m_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
