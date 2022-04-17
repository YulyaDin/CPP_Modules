#pragma once

#include "Form.hpp"
#include <string>

class Intern
{
public:
	Intern();
	Intern(Intern const &other);
	Intern &operator=(Intern const &other);
	~Intern();

	Form* makeForm(std::string name, std::string target);
};
