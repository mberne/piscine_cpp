#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

/*
** ------------------------------- CONSTRUCTOR AND DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	setTarget("Target");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	AForm::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if(getSigned() && executor.getGrade() <= getSignGrade() && executor.getGrade() <= getExecuteGrade())
	{
		std::ofstream file;

		file.open(getTarget().append("_shrubbery").c_str());
		if (!file.is_open())
		{
			std::cout << "File/Open error" << std::endl;
			return ;
		}
		file << "               ,@@@@@@@,\n"
				"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
				"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
				"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
				"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
				"       |o|        | |         | |\n"
				"       |.|        | |         | |\n"
				"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
		file.close();
	}
	else
		throw AForm::GradeTooLowException();
}