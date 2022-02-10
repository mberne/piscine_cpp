#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

class Intern
{
	public:

		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern	&operator=(Intern const &rhs);

		AForm *makeForm(std::string formsname, std::string formstarget);
};

#endif