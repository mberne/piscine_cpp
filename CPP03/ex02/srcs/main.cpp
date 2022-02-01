#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap	cp("Jean-Michel");

	std::cout << cp.getName() << std::endl;
	cp.attack("Bernadette");
	cp.takeDamage(50);
	cp.beRepaired(25);
	cp.takeDamage(50);
	cp.attack("Jean-Louis");
	cp.beRepaired(25);
	cp.highFivesGuys();
	cp.attack("Fabrice");
	cp.takeDamage(50);
	cp.attack("Patrick");
}