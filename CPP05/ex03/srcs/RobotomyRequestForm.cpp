#include "RobotomyRequestForm.hpp"
#include <cstdlib>

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	setTarget("Target");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	AForm::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if(getSigned() && executor.getGrade() <= getSignGrade() && executor.getGrade() <= getExecuteGrade())
	{
		std::cout << "*vrrrrrrrr* ";
		std::srand(time(NULL));
		int	rand = std::rand() % 2;
		if (rand)
			std::cout << getTarget() << " has been robotomized." << std::endl;
		else
			std::cout << getTarget() << " hasn't been robotomized." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}
