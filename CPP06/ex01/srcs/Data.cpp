#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Data::Data() : _stringValue("Random."), _intValue(42), _floatValue(4.2)
{

}

Data::Data(const Data &src)
{
	*this = src;
}

Data::~Data()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data	&Data::operator=(Data const &rhs)
{
	_stringValue = rhs._stringValue;
	_intValue = rhs._intValue;
	_floatValue = rhs._floatValue;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Data const &rhs)
{
	o << "String : " << rhs.getString() << " | Int : " << rhs.getInt() << " | Float : " << rhs.getFloat();
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Data::getString() const
{
	return _stringValue;
}

int	Data::getInt() const
{
	return _intValue;
}

float	Data::getFloat() const
{
	return _floatValue;
}

void	Data::setString(std::string value)
{
	if (!value.empty())
		_stringValue = value;
}

void	Data::setInt(int value)
{
	if (value > INT8_MIN && value < INT8_MAX)
		_intValue = value;
}

void	Data::setFloat(float value)
{
	_floatValue = value;
}