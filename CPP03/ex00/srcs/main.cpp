#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap	cp("Jean-Michel");

	std::cout << cp.getName() << std::endl;
	cp.attack("Bernadette");
	cp.takeDamage(5);
	cp.beRepaired(5);
	cp.takeDamage(8);
	cp.attack("Jean-Louis");
	cp.beRepaired(1);
	cp.beRepaired(1);
	cp.beRepaired(1);
	cp.attack("Fabrice");
	cp.takeDamage(4);
	cp.beRepaired(1);
	cp.beRepaired(1);
	// cp.beRepaired(1); // uncomment to see ClapTrap tired
	// cp.takeDamage(3); // uncomment to see ClapTrap dead
	cp.attack("Patrick");
}