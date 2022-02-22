#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Span::Span()
{

}

Span::Span(unsigned int N)
{
	_span.reserve(N);
}

Span::Span(const Span &src)
{
	_span.reserve(src._span.capacity());
	*this = src;
}

Span::~Span()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
		this->_span = rhs._span;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int newNumber)
{
	if (_span.size() < _span.capacity())
		_span.push_back(newNumber);
	else
		throw std::out_of_range("Vector full.");
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::out_of_range("Missing at least one element.");
	
	size_t	i = 0;
	size_t	j;
	int		value = INT_MAX;
	int		tmp = 0;
	
	while (i < _span.size())
	{
		j = i + 1;
		while (j < _span.size())
		{
			tmp = _span[i] - _span[j];
			if (tmp < 0)
				tmp *= -1;
			if (tmp < value)
				value = tmp;
			j++;
		}
		i++;
	}
	return value;
}

unsigned int	Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::out_of_range("Missing at least one element.");

	int	min = *std::min_element(_span.begin(), _span.end());
	int	max = *std::max_element(_span.begin(), _span.end());

	return max - min;
}

int	randomNumber()
{
	return (std::rand() % 100);
}

void	Span::fillVector()
{
	_span.assign(_span.capacity(), 0);
	srand(time(NULL));
	std::generate(_span.begin(), _span.end(), randomNumber);
	// size_t	i = 0;
	// while (i < _span.size())
	// {
	// 	std::cout << _span[i] << " ";
	// 	i++;
	// }
	// std::cout << std::endl;
}
