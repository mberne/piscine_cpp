#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Character::Character()
{
	size_t	i = 0;

	std::cout << "Character default constructor called." << std::endl;
	while (i < 4)
	{
		_inventory[i] = nullptr;
		i++;
	}
}

Character::Character(const Character &src) : _name(src._name)
{
	size_t	i = 0;

	std::cout << "Character copy constructor called." << std::endl;
	while (i < 4)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
		i++;
	}
}

Character::Character(std::string name) : _name(name)
{
	size_t	i = 0;

	std::cout << "Character default constructor called." << std::endl;
	while (i < 4)
	{
		_inventory[i] = nullptr;
		i++;
	}
}

Character::~Character()
{
	size_t	i = 0;
	
	std::cout << "Character destructor called." << std::endl;
	while (i < 4)
	{
		delete _inventory[i];
		i++;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		size_t	i = 0;

		_name = rhs._name;
		while (i < 4)
		{
			delete _inventory[i];
			i++;
		}

		i = 0;
		while (i < 4)
		{
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = nullptr;
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	&Character::getName() const
{
	return _name;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria *m)
{
	size_t	i = 0;

	while (_inventory[i])
		i++;
	if (i <= 3)
		_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3)
		_inventory[idx]->use(target);
}
