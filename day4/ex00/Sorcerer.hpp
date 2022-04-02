#ifndef SOURCER_HPP
#define SOURCER_HPP

#include <string>

class Sourcer
{
public:
	Sourcer(std::string name, std::string title);
	~Sourcer();

	void introduce();
	void polymorph(Victim const &) const;

private:
	std::string m_name;
	std::string m_title;
}

#endif
