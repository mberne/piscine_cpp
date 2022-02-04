#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain		&operator=(Brain const &rhs);
		std::string	getIdea(unsigned int i) const;
		void		setIdea(std::string const raw, unsigned int i);
};

#endif