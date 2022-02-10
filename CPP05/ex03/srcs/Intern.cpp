#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Intern::Intern()
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm	*Intern::makeForm(std::string formsname, std::string formstarget)
{
	std::string	forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	size_t		i = 0;
	AForm		*(Intern::*array_ptr_fct[])(std::string formstarget) = {&Intern::createShrubberyCreation, &Intern::createRobotomyRequest, &Intern::createPresidentialPardon};

	while (formsname.compare(forms[i]) && i < 3)
		i++;
	if (i >= 3)
	{
		std::cout << formsname << " form doesn't exist." << std::endl;
		return 0;
	}
	std::cout << "Intern creates " << forms[i] << " form." << std::endl;
	return ((this->*array_ptr_fct[i])(formstarget));
}

AForm	*Intern::createShrubberyCreation(std::string formstarget)
{
	AForm	*form = new ShrubberyCreationForm(formstarget);
	return form;
}

AForm	*Intern::createRobotomyRequest(std::string formstarget)
{
	AForm	*form = new RobotomyRequestForm(formstarget);
	return form;
}

AForm	*Intern::createPresidentialPardon(std::string formstarget)
{
	AForm	*form = new PresidentialPardonForm(formstarget);
	return form;
}