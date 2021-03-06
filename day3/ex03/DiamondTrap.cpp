#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name)
{
    m_name = name;
    m_hitpoints = FragTrap::getHitPoints();
    m_energy_points = ScavTrap::getEnergyPoints();
    m_damage = FragTrap::getAttackDamage();
    std::cout << "DiamondTrap user constructor has been called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) : 
	ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
    ClapTrap::operator=(diamondTrap);
    return (*this);
}

std::string DiamondTrap::getName()
{
	return m_name;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::checkMySelf()
{
	std::cout << "Look at me! I'm a beautiful creature!" << std::endl;
	std::cout << ">> Name - " << getName() << std::endl;
	std::cout << ">> Hitpoints - " << m_hitpoints << std::endl;
	std::cout << ">> Energy points - " << m_energy_points << std::endl;
	std::cout << ">> Damage - " << m_damage << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap have enterred in Gate keeper mode" << 
		" [ " << getName() << " ] ~ [ " << ClapTrap::getName() << " ]" << std::endl;
}
