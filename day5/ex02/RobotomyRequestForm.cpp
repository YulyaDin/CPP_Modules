#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
	: Form(other)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	Form::operator=(other);
	return(*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << "YOU MAKE ME WANNA DIE" << std::endl;
	if (std::rand() % 2)
	{
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << getTarget() << " failed robotomize" << std::endl;
	}
}
