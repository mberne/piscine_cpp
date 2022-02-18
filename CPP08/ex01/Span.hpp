#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int		_spanSize;
		std::vector<int>	_span;
		Span();

	public:
		Span(unsigned int N);
		Span(Span const &src);
		virtual ~Span();

		Span	&operator=(Span const &rhs);

		void	addNumber(int newNumber);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
};

#endif
