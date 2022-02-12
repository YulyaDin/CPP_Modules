#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

class Contact {
public:
	Contact();
	~Contact() {}

	void setFirstName(std::string firstName);
	std::string getFirstName(void);

	void setLastName(std::string lastName);
	std::string getLastName(void);

	void setNickname(std::string nickname);
	std::string getNickname(void);

	void setPhoneNumber(std::string phoneNumber);
	std::string getPhoneNumber(void);

	void setDarketSecret(std::string darkestSecret);
	std::string getDarketSecret(void);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

class PhoneBook {
private:
	Contact contacts[8];
};

#endif
