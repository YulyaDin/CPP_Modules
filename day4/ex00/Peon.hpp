#pragma once

#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(Peon const &other);
	~Peon();

	void getPolymorphed() const;
	Peon &operator=(Peon const &other);
private:
	std::string _name;
};
