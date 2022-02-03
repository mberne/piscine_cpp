#include "DiamondTrap.hpp"

/*
		Constructors and destructor
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "Copy DiamondTrap constructor called." << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called." << std::endl;
	_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

/*
		Operators overload
*/

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}

/*
		Main functions
*/

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << _name << " and his ClapTrap name is " << ClapTrap::_name << std::endl;
}