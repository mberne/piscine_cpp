#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog		&operator=(Dog const &rhs);
		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif