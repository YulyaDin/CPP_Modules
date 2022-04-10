#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat smallest("Milana", 150);
    
    try
    {
        smallest.decrementGrade();
        std::cout << smallest.getName() << " don't care about restrictions" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat cheekyBloke("cheekyBloke", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        smallest.incrementGrade();
        smallest.incrementGrade();
        smallest.incrementGrade();
        smallest.incrementGrade();
        std::cout << "Bureaucrat " << smallest.getName() << ": I am go on!" << std::endl;
		std::cout << smallest << std::endl;
		std::cout << "Bureaucrat " << smallest.getName() << " grade is: " << smallest.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
