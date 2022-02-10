#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_signGrade;
		const unsigned int	_executeGrade;
		std::string			_target;

	public:
		AForm();
		AForm(AForm const &src);
		AForm(std::string name, unsigned int signGrade, unsigned int executeGrade);
		virtual ~AForm();

		AForm	&operator=(AForm const &rhs);

		std::string		getName() const;
		bool			getSigned() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecuteGrade() const;
		std::string		getTarget() const;
		void			setSigned(bool sign);
		void			setTarget(std::string target);

		bool			beSigned(Bureaucrat &human);
		bool			execute(Bureaucrat const &executor) const;
		virtual	void	action() const = 0;

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

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif