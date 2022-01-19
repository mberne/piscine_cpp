#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string	&Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
