#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	&AMateria::getType() const
{
	return type;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria used on " << target.getName() << "." << std::endl;
}
