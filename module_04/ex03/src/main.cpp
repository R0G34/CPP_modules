#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"

int main() {
	IMateriaSource	*src = new MateriaSource();
	AMateria		*tmp;
	ICharacter		*bob = new Character("Bob");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ICE");
	bob->equip(tmp);
	tmp = src->createMateria("CURE");
	bob->equip(tmp);
	tmp = src->createMateria("ICE");
	bob->equip(tmp);

	bob->use(0, *bob);
	bob->use(1, *bob);
	bob->use(2, *bob);
	bob->use(3, *bob);

	bob->unequip(1);
	
	bob->use(0, *bob);
	bob->use(1, *bob);
	bob->use(2, *bob);

	src->getMemory();

	delete src;
	delete bob;
	return 0;
}