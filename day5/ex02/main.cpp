#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
	{
		Bureaucrat bureaucrat("John", 5);

		std::cout << bureaucrat;
		std::cout << std::endl;
		
		Form* presidentialPardonForm = new PresidentialPardonForm("Michael");
		Form* robotomyRequestForm = new RobotomyRequestForm("Stupid human");
		Form* shrubberyCreationForm = new ShrubberyCreationForm("Forest");
		Form* shrubberyCreationForm2 = new ShrubberyCreationForm("House");

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
		bureaucrat.executeForm(*shrubberyCreationForm2);
		std::cout << std::endl;
		
		Bureaucrat bureaucratMarat("Marat", 137);
		bureaucratMarat.executeForm(*robotomyRequestForm);
		bureaucratMarat.executeForm(*presidentialPardonForm);
		bureaucratMarat.executeForm(*shrubberyCreationForm);
		
		delete presidentialPardonForm;
		delete robotomyRequestForm;
		delete shrubberyCreationForm;
		delete shrubberyCreationForm2;
	}
	catch (std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
	}

    return (0);
}
