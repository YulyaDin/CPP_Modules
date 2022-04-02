#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	_value = integer << fract_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating)
{
	_value = roundf(floating * (1 << fract_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << fract_bits));
}

int Fixed::toInt(void) const
{
	return (_value >> fract_bits);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = other._value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = other._value;
	return *this;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed res(toFloat() + other.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed res(toFloat() - other.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed res(other.toFloat() * toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed res(toFloat() / other.toFloat());
	return res;
}

bool Fixed::operator>(const Fixed& other) const
{
	if (_value > other._value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& other) const
{
	if (_value < other._value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (_value >= other._value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (_value <= other._value)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
	if (_value == other._value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (_value != other._value)
		return (true);
	return (false);
}

Fixed& Fixed::operator++(void)
{
	_value++;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	_value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed newO = *this;
	operator++();
	return (newO);
}

Fixed Fixed::operator--(int)
{
	Fixed newO = *this;
	operator--();
	return (newO);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
