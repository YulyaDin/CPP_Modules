#include "PhoneBook.hpp"

void Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}
std::string Contact::getFirstName(void)
{
	return _firstName;
}

void Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

std::string Contact::getLastName(void)
{
	return _lastName;
}

void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

std::string Contact::getNickname(void)
{
	return _nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber(void)
{
	return _phoneNumber;
}

void Contact::setDarketSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string Contact::getDarketSecret(void)
{
	return _darkestSecret;
}
