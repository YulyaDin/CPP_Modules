#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
	Contact() {}
	~Contact() {}

	void setFirstName(std::string firstName);
	std::string getFirstName(void) const;

	void setLastName(std::string lastName);
	std::string getLastName(void) const;

	void setNickname(std::string nickname);
	std::string getNickname(void) const;

	void setPhoneNumber(std::string phoneNumber);
	std::string getPhoneNumber(void) const;

	void setDarkestSecret(std::string darkestSecret);
	std::string getDarkestSecret(void) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
