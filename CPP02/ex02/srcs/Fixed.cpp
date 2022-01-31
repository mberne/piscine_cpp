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
		Operators overload : Comparison
*/

bool	Fixed::operator>(Fixed const &rhs)
{
	return(this->_fixed_value > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return(this->_fixed_value < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return(this->_fixed_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return(this->_fixed_value <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return(this->_fixed_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return(this->_fixed_value != rhs.getRawBits());
}

/*
		Operators overload : Arithmetic
*/

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed tmp;

	tmp.setRawBits(this->_fixed_value + rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed tmp;

	tmp.setRawBits(this->_fixed_value - rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed tmp;

	tmp.setRawBits(this->_fixed_value * rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed tmp;

	tmp.setRawBits(this->_fixed_value / rhs.getRawBits());
	return tmp;
}

/*
		Operators overload : Increment/Decrement
*/

Fixed	Fixed::operator++()
{
	this->_fixed_value++;
	return *this;
}

Fixed	Fixed::operator--()
{
	this->_fixed_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_fixed_value++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_fixed_value--;
	return tmp;
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
		Main functions
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

/*
		min/max functions
*/

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

