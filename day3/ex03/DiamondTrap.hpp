#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap(std::string);
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap& diamondTrap);
    DiamondTrap& operator=(const DiamondTrap& diamondTrap);

	void whoAmI();
	void checkMySelf();
    void attack(std::string const & target);
private:
	std::string getName();
};

#endif
