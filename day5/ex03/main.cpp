#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Jhon", 5);
		
		std::cout << bureaucrat;
		std::cout << std::endl;
		
		Intern someRandomIntern;
		Form* presidentialPardonForm = someRandomIntern.makeForm("presidential pardon", "Ned");
		Form* robotomyRequestForm = someRandomIntern.makeForm("robotomy request", "Bender");
		Form* shrubberyCreationForm = someRandomIntern.makeForm("shrubbery creation", "forest");
		
		std::cout << *presidentialPardonForm;
		std::cout << *robotomyRequestForm;
		std::cout << *shrubberyCreationForm;
		std::cout << std::endl;
		
		bureaucrat.signForm(*presidentialPardonForm);
		bureaucrat.signForm(*presidentialPardonForm);
		bureaucrat.signForm(*robotomyRequestForm);
		bureaucrat.signForm(*robotomyRequestForm);
		bureaucrat.signForm(*shrubberyCreationForm);
		bureaucrat.signForm(*shrubberyCreationForm);
		std::cout << std::endl;
		
		bureaucrat.executeForm(*presidentialPardonForm);
		std::cout << std::endl;
		bureaucrat.executeForm(*robotomyRequestForm);
		std::cout << std::endl;
		bureaucrat.executeForm(*robotomyRequestForm);
		std::cout << std::endl;
		bureaucrat.executeForm(*robotomyRequestForm);
		std::cout << std::endl;
		bureaucrat.executeForm(*shrubberyCreationForm);
		std::cout << std::endl;
		
		Bureaucrat bureaucratMarat("Marat", 137);
		bureaucratMarat.executeForm(*robotomyRequestForm);
		bureaucratMarat.executeForm(*presidentialPardonForm);
		bureaucratMarat.executeForm(*shrubberyCreationForm);
		
		delete presidentialPardonForm;
		delete robotomyRequestForm;
		delete shrubberyCreationForm;
	}
	catch (std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
	}

    return (0);
}
