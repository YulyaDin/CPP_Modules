#include "PhoneBook.hpp"

void PhoneBook::addNewContact(Contact &contact)
{
	_contacts[_contactNumber % 8] = contact;
	_contactNumber++;
}

static std::string formatString(std::string field)
{
	if (field.size() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (field);
}

void PhoneBook::printContacts(void) const
{
	int	index;
	std::string command;

	std::cout << "-----------------CONTACTS-----------------" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < _contactNumber && i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << formatString(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << formatString(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << formatString(_contacts[i].getNickname()) << "|" << std::endl;
	}

	std::cout << "Enter contact index: ";

	std::cin >> command;

	index = command[0] - '0';
	if (command.size() > 1 || index < 1 || index > _contactNumber)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	else
	{
		printContact(_contacts[index - 1]);
	}
}

void PhoneBook::printContact(Contact contact) const
{
	std::cout << "Contact info";
	std::cout << "FirstName : " << contact.getFirstName() << std::endl;
	std::cout << "LastName : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickname() << std::endl;
	std::cout << "PhoneNumber : " << contact.getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret : " << contact.getDarkestSecret() << std::endl;
}
