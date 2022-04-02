#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(std::string);
    ~FragTrap();

    FragTrap(const FragTrap& fragTrap);
    FragTrap& operator=(const FragTrap& fragTrap);

	void highFivesGuys();
    void attack(std::string const & target);

	int getHitPoints();
	int getAttackDamage();
};

#endif
