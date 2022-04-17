#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat& executor) const;
};
