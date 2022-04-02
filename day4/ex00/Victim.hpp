#pragma once

#include <string>

class Victim
{
public:
	Victim(std::string name);
	Victim(Victim const &other);
	~Victim();

	Victim &operator=(Victim const &other);

	std::string getName() const;
	virtual void getPolymorphed() const;

private:
	std::string _name;
};

std::ostream& operator<<(std::ostream& os, const Victim& vic);
