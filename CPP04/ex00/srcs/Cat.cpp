#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return	*this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Miawwww !" << std::endl;
}