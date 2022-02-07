#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	*this->_brain = *rhs._brain;
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	*Cat::getBrain() const
{
	return _brain;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Miawwww !" << std::endl;
}