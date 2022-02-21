#include <iostream>
#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);

		std::cout << std::endl << "______Only one number._____" << std::endl;

		try
		{
			sp.addNumber(6);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << std::endl << "______Vector full._____" << std::endl;

		try
		{
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl << "______Add a number but vector is full._____" << std::endl;

		try
		{
			sp.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl << "_____Generate a full vector._____" << std::endl;

	{
		Span sp = Span(20);

		sp.fillVector();
	}

	return 0;
}
