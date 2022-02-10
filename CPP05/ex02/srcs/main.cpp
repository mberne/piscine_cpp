#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	
	{
		Bureaucrat	jp("Jean Paul", 1);
		AForm		*form1 = new ShrubberyCreationForm("Michel");
		AForm		*form2 = new RobotomyRequestForm("Michou");
		AForm		*form3 = new PresidentialPardonForm("Mich-Mich");

		try
		{
			jp.signForm(*form1);
			jp.executeForm(*form1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			jp.signForm(*form2);
			jp.executeForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			jp.signForm(*form3);
			jp.executeForm(*form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		delete(form1);
		delete(form2);
		delete(form3);
	}

	std::cout << std::endl;

	{
		Bureaucrat	noob("Random noob", 150);
		AForm		*form1 = new ShrubberyCreationForm("Michel");
		AForm		*form2 = new RobotomyRequestForm("Michou");
		AForm		*form3 = new PresidentialPardonForm("Mich-Mich");
		
		try
		{
			noob.signForm(*form1);
			noob.executeForm(*form1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			noob.signForm(*form2);
			noob.executeForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			noob.signForm(*form3);
			noob.executeForm(*form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		delete(form1);
		delete(form2);
		delete(form3);
	}

	std::cout << std::endl;

	{
		Bureaucrat	je("Jean Eude", 20);
		AForm		*form1 = new ShrubberyCreationForm("Michel");
		AForm		*form2 = new RobotomyRequestForm("Michou");
		AForm		*form3 = new PresidentialPardonForm("Mich-Mich");
		
		try
		{
			je.executeForm(*form1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			je.signForm(*form2);
			je.executeForm(*form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			je.signForm(*form3);
			je.executeForm(*form3);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		delete(form1);
		delete(form2);
		delete(form3);
	}

	return 0;
}