#include "ClapTrap.hpp"

/*
		Constructors and destructor
*/

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string name) : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called." << std::endl;
	_name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

/*
		Operators overload
*/

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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
		Getter
*/

std::string	ClapTrap::getName() const
{
	return(_name);
}

int	ClapTrap::getHitPoints() const
{
	return (_hit_points);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energy_points);
}

int	ClapTrap::getAttackDamage() const
{
	return (_attack_damage);
}

/*
		Main functions
*/

void	ClapTrap::attack(const std::string &target)
{
	if (_hit_points)
	{
		if (_energy_points)
		{
			_energy_points--;
			std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->getName() << " is tired." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points)
	{
		std::cout << "ClapTrap " << this->getName() << " tooks " << amount << " points of damage." << std::endl;
		if (_hit_points > amount)
			_hit_points -= amount;
		else
		{
			_hit_points = 0;
			std::cout << "ClapTrap " << this->getName() << " is now dead." << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is already dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points)
	{
		if (_energy_points)
		{
			_energy_points--;
			_hit_points += amount;
			std::cout << "ClapTrap " << this->getName() << " is repared for " << amount << " points of damage." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->getName() << " is tired." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
}
