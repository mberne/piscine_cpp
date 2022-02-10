#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern	&operator=(Intern const &rhs);

		AForm	*makeForm(std::string formsname, std::string formstarget);
		AForm	*createShrubberyCreation(std::string formstarget);
		AForm	*createRobotomyRequest(std::string formstarget);
		AForm	*createPresidentialPardon(std::string formstarget);
};

#endif