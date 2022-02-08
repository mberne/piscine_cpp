#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

AForm::AForm() : _name("AForm"), _signed(0), _signGrade(150), _executeGrade(150)
{
}

AForm::AForm(const AForm &src) : _name("AForm"), _signGrade(150), _executeGrade(150)
{
	*this = src;
}

AForm::AForm(std::string name, unsigned int signGrade, unsigned int executeGrade) : _name(name), _signed(0), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw AForm::GradeTooHighException();
	else if (signGrade < 1 || executeGrade < 1)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm	&AForm::operator=(AForm const &rhs)
{
	_signed = rhs._signed;
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
	o << rhs.getName() << " AForm ";
	if (rhs.getSigned())
		o << "is signed.";
	else
		o << "isn't signed.";
	o << " His sign grade is " << rhs.getSignGrade() << " and his execute grade is " << rhs.getExecuteGrade();
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AForm::getName() const
{
	return _name;
}

bool	AForm::getSigned() const
{
	return _signed;
}

unsigned int	AForm::getSignGrade() const
{
	return _signGrade;
}

unsigned int	AForm::getExecuteGrade() const
{
	return _executeGrade;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::beSigned(Bureaucrat human)
{
	if (human.getGrade() <= getSignGrade())
		_signed = 1;
	else
		throw AForm::GradeTooLowException();
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}