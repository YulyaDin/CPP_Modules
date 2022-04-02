#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    m_name = name;
    m_hitpoints = 100;
    m_energy_points = 100;
    m_damage = 30;
    std::cout << "FragTrap user constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
    ClapTrap::operator=(fragTrap);
    return (*this);
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap <" << m_name << "> attacks " << target <<
        " causing " << m_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hi five!" << std::endl;
}
