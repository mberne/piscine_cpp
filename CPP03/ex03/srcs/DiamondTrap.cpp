#include "DiamondTrap.hpp"

/*
		Constructors and destructor
*/

FragTrap::FragTrap()
{

}

FragTrap::FragTrap(FragTrap const &src)
{

}

FragTrap::FragTrap(std::string name)
{

}

FragTrap::~FragTrap()
{

}

/*
		Operators overload
*/

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	return *this;
}

/*
		Main functions
*/

void	DiamondTrap::whoAmI()
{

}