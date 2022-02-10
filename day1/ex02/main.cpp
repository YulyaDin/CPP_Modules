#include <iostream>
#include <string>

int main()
{
	std::string justString = "HI THIS IS BRAIN";
	std::string* stringPTR = &justString;
	std::string& stringREF = justString;

	std::cout << "the address in memory of the string - " << &justString << std::endl;
	std::cout << "the address of the string using stringPTR - " << stringPTR << std::endl;
	std::cout << "the address of the string using stringREF - " << &stringREF << std::endl;
	std::cout << "displaying the string using the pointer - " << *stringPTR << std::endl;
	std::cout << "displaying the string using the reference - " << stringREF << std::endl;

	return (0);
}
