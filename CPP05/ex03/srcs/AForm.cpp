#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

AForm::AForm() : _name("Form"), _signed(0), _signGrade(150), _executeGrade(150)
{

}

AForm::AForm(const AForm &src) : _name("Form"), _signGrade(150), _executeGrade(150)
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
	_target = rhs._target;
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
	o << rhs.getName() << " form ";
	if (rhs.getSigned())
		o << "is signed.";
	else
		o << "isn't signed.";
	o << " His sign grade is " << rhs.getSignGrade() << " and his execute grade is " << rhs.getExecuteGrade() << ".";
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

std::string		AForm::getTarget() const
{
	return _target;
}

void	AForm::setSigned(bool sign)
{
	_signed = sign;
}

void	AForm::setTarget(std::string target)
{
	_target = target;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	AForm::beSigned(Bureaucrat &human)
{
	if (human.getGrade() <= getSignGrade())
		_signed = 1;
	else
		throw AForm::GradeTooLowException();
	return (_signed);
}

bool	AForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
	{
		std::cout << _name << " isn't signed." << std::endl;
		return 0;
	}
	else if(executor.getGrade() <= getExecuteGrade())
	{
		this->action();
		return 1;
	}
	else
		throw Bureaucrat::GradeTooLowException();
	return 0;
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Form's grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Form's grade is too low");
}