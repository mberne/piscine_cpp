#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{	
	Intern someRandomIntern;
	AForm* scf;
	AForm* rrf;
	AForm* ppf;
	AForm* damn;

	scf = someRandomIntern.makeForm("shrubbery creation", "Blender");
	std::cout << scf->getTarget() << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << rrf->getTarget() << std::endl;
	ppf = someRandomIntern.makeForm("presidential pardon", "Bende");
	std::cout << ppf->getTarget() << std::endl;
	damn = someRandomIntern.makeForm("coffee", "Karen");

	delete scf;
	delete rrf;
	delete ppf;
	
	return 0;
}