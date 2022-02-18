#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Span::Span()
{

}

Span::Span(unsigned int N) : _spanSize(0)
{
	_span.resize(N);
}

Span::Span(const Span &src)
{
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
	{
		this->_spanSize = rhs._spanSize;
		this->_span = rhs._span;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int newNumber)
{
	if (_spanSize < _span.size())
	{
		_span.push_back(newNumber);
		_spanSize++;
	}
	else
		throw std::out_of_range("Vector full.");
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::out_of_range("Missing at least one element.");
	//
	return 1;
}

unsigned int	Span::longestSpan()
{
	if (_spanSize < 2)
		throw std::out_of_range("Missing at least one element.");

	int	min = *std::min_element(_span.begin(), _span.end());
	int	max = *std::max_element(_span.begin(), _span.end());

	std::cout << min << " " << max << std::endl;
	return max - min;
}
