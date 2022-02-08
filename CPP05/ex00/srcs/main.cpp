#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	pl("Pierre Louis", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat	mf("Marie France", 150);
	try
	{
		mf.demote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << mf << std::endl;

	Bureaucrat	jm("Jean Michel", 1);
	std::cout << jm << std::endl;
	jm.demote();
	std::cout << jm << std::endl;
	
	return 0;
}