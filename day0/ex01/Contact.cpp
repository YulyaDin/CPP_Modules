#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}
std::string Contact::getFirstName(void) const
{
	return _firstName;
}

void Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

std::string Contact::getLastName(void) const
{
	return _lastName;
}

void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

std::string Contact::getNickname(void) const
{
	return _nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

std::string Contact::getPhoneNumber(void) const
{
	return _phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}
