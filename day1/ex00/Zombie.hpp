#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	void announce(void);
private:
	std::string _name;
};

void randomChump(std::string name);

Zombie* newZombie(std::string name);

#endif
