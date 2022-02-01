#include "FragTrap.hpp"

/*
		Constructors and destructor
*/

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy FragTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	*this = src;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_name = name;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
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

void	FragTrap::attack(const std::string &target)
{
	if (_hit_points)
	{
		if (_energy_points)
		{
			_energy_points--;
			std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
		}
		else
			std::cout << "FragTrap " << this->getName() << " is tired." << std::endl;
	}
	else
		std::cout << "FragTrap " << this->getName() << " is dead." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "ScavTrap " << this->getName() << " is asking a high five." << std::endl;
}