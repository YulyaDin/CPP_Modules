#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
	: Form(other)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	Form::operator=(other);
	return(*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
