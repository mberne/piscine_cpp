#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete	_brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	*this->_brain = *rhs._brain;
	return	*this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	*Dog::getBrain() const
{
	return	_brain;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Wouaf ! Wouaf !" << std::endl;
}