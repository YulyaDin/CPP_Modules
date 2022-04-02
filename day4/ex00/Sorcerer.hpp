#pragma once

#include <string>
#include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &other);
	~Sorcerer();

	Sorcerer &operator=(Sorcerer const &other);
	void polymorph(Victim const &) const;
	std::string getName() const;
	std::string getTitle() const;

private:
	std::string _name;
	std::string _title;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& sor);
