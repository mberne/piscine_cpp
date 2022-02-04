#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain default constructor called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain	&Brain::operator=(Brain const &rhs)
{
	size_t	i = 0;
	
	while (i < 100)
	{
		this->_ideas[i] = rhs._ideas[i];
		i++;
	}
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Brain::getIdea(unsigned int i) const
{
	if (i < 100)
		return _ideas[i];
	return "";
}

void	Brain::setIdea(std::string const raw, unsigned int i)
{
	if (i < 100)
		_ideas[i] = raw;
}