#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat smallestBure("Milana", 150);
	Form largestForm("Apostil", 5, 75);

    try
    {
		largestForm.beSigned(smallestBure);
        std::cout << smallestBure.getName() << " don't care about restrictions" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Bureaucrat cheekyBloke("cheekyBloke", 3);

	try
	{
		smallestBure.signForm(largestForm);
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
		cheekyBloke.signForm(largestForm);
        cheekyBloke.incrementGrade();
        cheekyBloke.incrementGrade();
        cheekyBloke.incrementGrade();
        cheekyBloke.incrementGrade();
		std::cout << cheekyBloke << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
