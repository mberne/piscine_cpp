#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Ice::Ice()
{
	std::cout << "Ice default constructor called." << std::endl;
	type = "ice";
}

Ice::Ice(const Ice &src)
{
	std::cout << "Ice copy constructor called." << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice	&Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria	*Ice::clone() const
{
	AMateria	*tmp = new Ice();

	return (tmp);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
