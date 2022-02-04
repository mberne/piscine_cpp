#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		AAnimal		&operator=(AAnimal const &rhs);

		std::string		getType() const;
		void			setType(std::string const raw);
		virtual void	makeSound() const = 0;
};

#endif