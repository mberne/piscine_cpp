#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTORS AND DESTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.getType();
	return	*this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AAnimal::getType() const
{
	return	type;
}

void AAnimal::setType(std::string const raw)
{
	type = raw;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound() const
{
	std::cout << "Animal sound..." << std::endl;
}