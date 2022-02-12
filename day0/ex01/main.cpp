#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void addCommand(PhoneBook &book)
{
}

void searchCommand(PhoneBook &book) const
{
	cout.width(10);
	setw(10) << left;
}

int main(int ac, char **av)
{
	std::string command;

	if (ac == 1)
	{
		PhoneBook book;
		while (std::getline(std::cin, command))
		{
			if (command.empty()) {
				continue;
			} else if (command == "ADD") {
				addCommand(book);
			} else if (command == "SEARCH") {
				searchCommand(book);
			} else if (command == "EXIT") {
				break ;
			} else {
				std::cout << "The command " << command << " is unsupported" << std::endl;
			}
		}
	}
	else
	{
		std::cout << "Wrong user input style. We expect you first to lauch the program and only after it begin to type" << std::endl;
		return (1);
	}
	return (0);
}
