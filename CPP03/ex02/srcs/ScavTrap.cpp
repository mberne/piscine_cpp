#include "ScavTrap.hpp"

/*
		Constructors and destructor
*/

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy ScavTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	*this = src;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_name = name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

/*
		Operators overload
*/

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}

/*
		Main functions
*/

void	ScavTrap::attack(const std::string &target)
{
	if (_hit_points)
	{
		if (_energy_points)
		{
			_energy_points--;
			std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->getName() << " is tired." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is in gate keeper mode." << std::endl;
}