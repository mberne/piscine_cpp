#include "DiamondTrap.hpp"

/*
		Constructors and destructor
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "Copy DiamondTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
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