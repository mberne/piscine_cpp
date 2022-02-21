#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	size_t	i = 0;

	std::cout << "MateriaSource default constructor called." << std::endl;
	while (i < 4)
	{
		_materias[i] = nullptr;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	size_t	i = 0;

	std::cout << "MateriaSource copy constructor called." << std::endl;
	while (i < 4)
	{
		if (src._materias[i])
			_materias[i] = src._materias[i]->clone();
		else
			_materias[i] = nullptr;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	size_t	i = 0;
	std::cout << "MateriaSource destructor called." << std::endl;
	while (i < 4)
	{
		delete _materias[i];
		i++;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		size_t	i = 0;

		while (i < 4)
		{
			delete _materias[i];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (rhs._materias[i])
				_materias[i] = rhs._materias[i]->clone();
			else
				_materias[i] = nullptr;
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	MateriaSource::learnMateria(AMateria *m)
{
	size_t	i = 0;

	while (_materias[i])
		i++;
	if (i <= 3)
		_materias[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	size_t	i = 0;

	while (i <= 3)
	{
		if (_materias[i]->getType() == type)
			return _materias[i]->clone();
		i++;
	}
	return 0;
}