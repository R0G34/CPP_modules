#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	ClapTrap	Batman("Batman");
	ClapTrap	*Juliet = new ClapTrap("Juliet");
	ScavTrap	Charo("Charo");
	FragTrap	Castor("Castor");

	Batman.attack("Charo");
	Charo.takeDamage(Batman.getAttackDamage());
	Charo.beRepaired(18);
	Charo.guardGate();
	Charo.attack("Juliet");
	Juliet->takeDamage(Charo.getAttackDamage());
	delete Juliet;
	Castor.attack("Charo");
	Charo.takeDamage(Castor.getAttackDamage());
	Castor.highFivesGuys();
	return 0;
}