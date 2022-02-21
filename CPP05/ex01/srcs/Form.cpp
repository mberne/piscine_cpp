#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Form::Form() : _name("Form"), _signed(0), _signGrade(150), _executeGrade(150)
{
}

Form::Form(const Form &src) : _name("Form"), _signGrade(150), _executeGrade(150)
{
	*this = src;
}

Form::Form(std::string name, unsigned int signGrade, unsigned int executeGrade) : _name(name), _signed(0), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooHighException();
	else if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
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

std::string	Form::getName() const
{
	return _name;
}

bool	Form::getSigned() const
{
	return _signed;
}

unsigned int	Form::getSignGrade() const
{
	return _signGrade;
}

unsigned int	Form::getExecuteGrade() const
{
	return _executeGrade;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	Form::beSigned(Bureaucrat &human)
{
	if (human.getGrade() <= getSignGrade())
		_signed = 1;
	else
		throw Form::GradeTooLowException();
	return (_signed);
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form's grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form's grade is too low");
}