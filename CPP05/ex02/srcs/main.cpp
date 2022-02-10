#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	
	Bureaucrat	jp("Jean Paul", 1);
	Bureaucrat	noob("Random noob", 150);
	Bureaucrat	je("Jean Eude", 20);
	AForm		*form1 = new ShrubberyCreationForm("Michel");
	AForm		*form2 = new RobotomyRequestForm("Michou");
	AForm		*form3 = new PresidentialPardonForm("Mich-Mich");

	try
	{
		form1->beSigned(jp);
		jp.executeForm(*form1);
		form1->execute(jp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form2->beSigned(jp);
		jp.executeForm(*form2);
		form2->execute(jp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form3->beSigned(jp);
		jp.executeForm(*form3);
		form3->execute(jp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		form1->beSigned(noob);
		noob.executeForm(*form1);
		form1->execute(noob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form2->beSigned(noob);
		noob.executeForm(*form2);
		form2->execute(noob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form3->beSigned(noob);
		noob.executeForm(*form3);
		form3->execute(noob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		form1->beSigned(je);
		je.executeForm(*form1);
		form1->execute(je);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form2->beSigned(je);
		je.executeForm(*form2);
		form2->execute(je);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form3->beSigned(je);
		je.executeForm(*form3);
		form3->execute(je);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete(form1);
	delete(form2);
	delete(form3);

	return 0;
}