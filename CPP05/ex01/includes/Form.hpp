#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_signGrade;
		const unsigned int	_executeGrade;

	public:
		Form();
		Form(Form const &src);
		Form(std::string name, unsigned int signGrade, unsigned int executeGrade);
		~Form();

		Form	&operator=(Form const &rhs);

		std::string		getName() const;
		bool			getSigned() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecuteGrade() const;

		void			beSigned(Bureaucrat human);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif