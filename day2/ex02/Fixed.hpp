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

	bool operator<(const Fixed&) const;
	bool operator>(const Fixed&) const;
	bool operator<=(const Fixed&) const;
	bool operator>=(const Fixed&) const;
	bool operator==(const Fixed&) const;
	bool operator!=(const Fixed&) const;

	Fixed operator+(const Fixed&) const;
	Fixed operator-(const Fixed&) const;
	Fixed operator*(const Fixed&) const;
	Fixed operator/(const Fixed&) const;

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed&, Fixed&);
	static Fixed &max(Fixed&, Fixed&);
	static Fixed const &min(Fixed const &, Fixed const &);
	static Fixed const &max(Fixed const &, Fixed const &);

private:
	int _value;
	static const int fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
