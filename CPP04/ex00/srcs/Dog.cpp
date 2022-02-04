#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	return	*this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Wouaf ! Wouaf !" << std::endl;
}