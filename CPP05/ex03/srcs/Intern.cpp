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

}
