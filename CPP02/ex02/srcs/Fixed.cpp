#include "Fixed.hpp"

/*
		Constructors and destructor
*/

Fixed::Fixed() : _fixed_value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called." << std::endl;
	_fixed_value = value << _number_of_fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called." << std::endl;
	_fixed_value = value * (1 << _number_of_fractional_bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

/*
		Operators overload : Other
*/

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_fixed_value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

/*
		Operators overload : Comparison
*/

bool	Fixed::operator>(Fixed const &rhs)
{
	if (this->_fixed_value > rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator<(Fixed const &rhs)
{
	if (this->_fixed_value < rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	if (this->_fixed_value >= rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	if (this->_fixed_value <= rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator==(Fixed const &rhs)
{
	if (this->_fixed_value == rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	if (this->_fixed_value != rhs.getRawBits())
		return 1;
	return 0;
}

/*
		Operators overload : Arithmetic
*/

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return Fixed(this->_fixed_value + rhs.getRawBits());
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return Fixed(this->_fixed_value - rhs.getRawBits());
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return Fixed(this->_fixed_value * rhs.getRawBits());
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return Fixed(this->_fixed_value / rhs.getRawBits());
}

/*
		Other functions
*/

int Fixed::getRawBits() const
{
	return _fixed_value;
}

void Fixed::setRawBits(int const raw)
{
	_fixed_value = raw;
}

int Fixed::toInt() const
{
	return _fixed_value >> _number_of_fractional_bits;
}

float Fixed::toFloat() const
{
	return (float)_fixed_value / (float)(1 << _number_of_fractional_bits);
}