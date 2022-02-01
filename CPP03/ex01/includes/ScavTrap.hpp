#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &rhs);
		
		void		attack(const std::string &target);
		void 		guardGate();;
};

#endif