#pragma once

#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

    void execute(const Bureaucrat& executor) const;
};
