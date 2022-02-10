#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Bureaucrat::getName() const
{
	return _name;
}

unsigned int	Bureaucrat::getGrade() const
{
	return _grade;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::promote()
{
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::demote()
{
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signForm(AForm &paper)
{
	if (paper.beSigned(*this))
		std::cout << _name << " signed " << paper.getName() << "." << std::endl;
	else
		std::cout << _name << " couldn't sign " << paper.getName() << " because ";
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.execute(*this))
		std::cout << getName() << " executed " << form.getName() << std::endl;
	else
		std::cout << getName() << " didn't execute " << form.getName() << std::endl;
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade is too low");
}