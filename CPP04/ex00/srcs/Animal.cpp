#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTORS AND DESTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal	&Animal::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	return	*this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const
{
	return	type;
}

void Animal::setType(std::string const raw)
{
	type = raw;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "Animal sound..." << std::endl;
}