#include "ClapTrap.hpp"

int	main() {
	ClapTrap	Amadeus("Amadeus");
	ClapTrap	Pichard("Pichard");

	Amadeus.attack("Pichard");
	Pichard.takeDamage(Pichard.getAttackDamage());
	Pichard.beRepaired(2);

	return 0;
}