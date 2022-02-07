#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Cure::Cure()
{
	std::cout << "Cure default constructor called." << std::endl;
	type = "cure";
}

Cure::Cure(const Cure &src)
{
	std::cout << "Cure copy constructor called." << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria	*Cure::clone() const
{
	AMateria	*tmp = new Cure();

	return (tmp);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}