#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	setTarget("Target");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	AForm::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if(getSigned() && executor.getGrade() <= getSignGrade() && executor.getGrade() <= getExecuteGrade())
		std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	else
		throw AForm::GradeTooLowException();
}