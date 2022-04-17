#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "New intern created" << std::endl;
}

Intern::Intern(Intern const &other)
{
	*this = other;
	std::cout << "Intern copied" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return(*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string forms[4] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;

    while (forms[i] != name && i < 4)
	{
        i++;
	}
	std::cout << "Intern creates " << name << std::endl;
    switch (i)
    {
        case 0:
			return (new ShrubberyCreationForm(target));
        case 1:
			return (new RobotomyRequestForm(target));
        case 2:
			return (new PresidentialPardonForm(target));
        default:
            std::cout << "OOPS, no such form" << std::endl;
            return NULL;
	}
}
