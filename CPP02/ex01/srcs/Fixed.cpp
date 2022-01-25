#include "Fixed.hpp"

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
	std::cout << _fixed_value << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called." << std::endl;
	_fixed_value = value * (1 << _number_of_fractional_bits);
	std::cout << _fixed_value << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called." << std::endl;
	this->_fixed_value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

int Fixed::getRawBits() const
{
	return (_fixed_value);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_value = raw;
}

int Fixed::toInt() const
{
	return(_fixed_value >> _number_of_fractional_bits);
}

float Fixed::toFloat() const
{
	return(_fixed_value >> _number_of_fractional_bits);
}