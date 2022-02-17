#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void addCommand(PhoneBook &book)
{
	Contact contact;
	std::string line;

	std::cout << "Enter first name: ";
	std::cin >> line;
	contact.setFirstName(line);
	std::cout << "Enter last name: ";
	std::cin >> line;
	contact.setLastName(line);
	std::cout << "Enter nickname: ";
	std::cin >> line;
	contact.setNickname(line);
	std::cout << "Enter phone number: ";
	std::cin >> line;
	contact.setPhoneNumber(line);
	std::cout << "Enter darkest secret: ";
	std::cin >> line;
	contact.setDarkestSecret(line);
	book.addNewContact(contact);
}

int main(int ac, __unused char **av)
{
	std::string command;

	if (ac == 1)
	{
		PhoneBook book;
		std::cout << "Enter new command" << std::endl;
		while (std::getline(std::cin, command))
		{
			if (command.empty()) {
				continue;
			} else if (command == "ADD") {
				addCommand(book);
			} else if (command == "SEARCH") {
				book.printContacts();
			} else if (command == "EXIT") {
				break ;
			} else {
				std::cout << "The command " << command << " is unsupported" << std::endl;
				std::cout << "Supported commadns are 'ADD'/'EXIT'/'SEARCH'" << std::endl;
			}
			std::cout << "Enter new command" << std::endl;
		}
	}
	else
	{
		std::cout << "Wrong user input style. We expect you first to lauch the program and only after it begin to type" << std::endl;
		return (1);
	}
	return (0);
}
