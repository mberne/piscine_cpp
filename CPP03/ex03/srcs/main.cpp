#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap	cp("Jean-Michel");

	cp.whoAmI();
	cp.guardGate();
	cp.highFivesGuys();

	std::cout << "Hit Points : " << cp.getHitPoints() << " | Energy Points : " << cp.getEnergyPoints() << " | Attack Damage : " << cp.getAttackDamage() << std::endl;
	cp.attack("Bernadette");
	cp.takeDamage(50);
	cp.beRepaired(25);
	cp.takeDamage(50);
	cp.attack("Jean-Louis");
	cp.beRepaired(25);
	cp.attack("Fabrice");
	cp.takeDamage(50);
	cp.attack("Patrick");
}