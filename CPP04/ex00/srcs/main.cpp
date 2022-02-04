#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	{	
		const Animal* meta = new Animal();
		const Animal* d = new Dog();
		const Animal* c = new Cat();

		std::cout << meta->getType() << std::endl;
		std::cout << d->getType() << std::endl;
		std::cout << c->getType() << std::endl;

		d->makeSound(); //will output the dog sound
		c->makeSound(); //will output the cat sound
		meta->makeSound(); //will output an animal sound

		delete c;
		delete d;
		delete meta;
	}

	std::cout << std::endl;

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* c = new WrongCat();

		std::cout << meta->getType() << std::endl;
		std::cout << c->getType() << std::endl;

		c->makeSound(); //will output an animal sound
		meta->makeSound(); //will output an animal sound

		delete c;
		delete meta;
	}
	return 0;
}