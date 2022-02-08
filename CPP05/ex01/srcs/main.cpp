#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Form	form("Babeuc ce dimanche", 100, 50);

		Bureaucrat	jl("Jean Louis", 150);
		std::cout << jl << std::endl;
		std::cout << form << std::endl;
		try
		{
			form.beSigned(jl);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << form << std::endl;
		jl.signForm(form);
	}

	std::cout << std::endl;

	{
		Form	form("Révolution mardi", 100, 50);

		Bureaucrat	md("Marie Dominique", 1);
		std::cout << md << std::endl;
		std::cout << form << std::endl;
		try
		{
			form.beSigned(md);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << form << std::endl;
		md.signForm(form);
	}
	
	return 0;
}