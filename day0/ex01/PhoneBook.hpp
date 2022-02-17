#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
public:
	PhoneBook() : _contactNumber(0) {}
	~PhoneBook() {}

	void printContacts(void) const;
	void printContact(Contact contact) const;
	void addNewContact(Contact& contact);
	void setContactsCount(int count);
	int getContactsCount(void) const;
private:
    Contact _contacts[8];
	int		_contactNumber;
};

#endif
