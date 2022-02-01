#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap	cp("Jean-Michel");

	std::cout << cp.getName() << std::endl;
	cp.attack("Bernadette");
	cp.takeDamage(50);
	cp.beRepaired(25);
	cp.takeDamage(50);
	cp.attack("Jean-Louis");
	cp.beRepaired(25);
	cp.guardGate();
	cp.attack("Fabrice");
	cp.takeDamage(50);
	cp.attack("Patrick");
}