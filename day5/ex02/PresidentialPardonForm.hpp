#pragma once

#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	~PresidentialPardonForm();

	void execute(const Bureaucrat& executor) const;
};
