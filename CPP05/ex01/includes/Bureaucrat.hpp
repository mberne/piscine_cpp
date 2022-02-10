#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(std::string name, unsigned int grade);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string		getName() const;
		unsigned int	getGrade() const;

		void			promote();
		void			demote();
		void			signForm(Form &paper);

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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif