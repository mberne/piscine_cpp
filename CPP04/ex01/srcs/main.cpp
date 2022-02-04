#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	{	
		const Animal* d = new Dog();
		const Animal* c = new Cat();

		delete d; //should not create a leak
		delete c; //should not create a leak
	}

	std::cout << std::endl;

	{
		std::cout << std::endl;
		std::cout << "__________Create and fill an array of animals.__________" << std::endl;
		std::cout << std::endl;
		
		size_t	num = 10;
		size_t	i = 0;
		Animal* array[num];

		while (i < num / 2)
		{
			array[i] = new Dog();
			i++;
		}
		while (i < num)
		{
			array[i] = new Cat();
			i++;
		}

		std::cout << std::endl;
		std::cout << "__________Get type of the animals.__________" << std::endl;
		std::cout << std::endl;

		i = 0;
		while (i < num)
		{
			std::cout << array[i]->getType() << std::endl;
			i++;
		}

		std::cout << std::endl;
		std::cout << "__________Destroy the array of animals.__________" << std::endl;
		std::cout << std::endl;

		i = 0;
		while (i < num)
		{
			delete array[i];
			i++;
		}
	}

	std::cout << std::endl;

	{
		Cat	c1;
		c1.getBrain()->setIdea("J'aime les croquettes.", 0);
		c1.getBrain()->setIdea("J'aime les caresses.", 1);
		Cat c2(c1);
		c2.getBrain()->setIdea("Suis-je vraiment moi ?", 1);

		std::cout << "C1 Idea 0 : " << c1.getBrain()->getIdea(0) << std::endl;
		std::cout << "C1 Idea 1 : " << c1.getBrain()->getIdea(1) << std::endl;
		std::cout << "C2 Idea 0 : " << c2.getBrain()->getIdea(0) << std::endl;
		std::cout << "C2 Idea 1 : " << c2.getBrain()->getIdea(1) << std::endl;
	}

	return 0;
}