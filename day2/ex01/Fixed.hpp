#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const int integer);
	Fixed(const float floating);

	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
private:
	int _value;
	static const int fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
