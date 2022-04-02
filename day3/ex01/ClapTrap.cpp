#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
	: m_name(name), m_hitpoints(10),
		m_energy_points(10), m_damage(0)
{
	std::cout << "ClapTrap user constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	m_name = clapTrap.m_name;
	m_hitpoints = clapTrap.m_hitpoints;
	m_energy_points = clapTrap.m_energy_points;
	m_damage = clapTrap.m_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	m_name = clapTrap.m_name;
	m_hitpoints = clapTrap.m_hitpoints;
	m_energy_points = clapTrap.m_energy_points;
	m_damage = clapTrap.m_damage;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << m_name << "> attacks " << target << 
		" causing " << m_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <" << m_name << ">: is attacked and lost [ " << amount << " ] energy points" << std::endl;
	m_energy_points -= amount;
	if (m_energy_points < 0)
	{
		m_energy_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << m_name << "> is repaired and recieved [ " << amount << " ] energy points" << std::endl;
	m_energy_points += amount;
}
