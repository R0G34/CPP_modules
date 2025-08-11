#include "../include/Cure.hpp"

Cure::Cure() : AMateria::AMateria("CURE") {
	std::cout << "[C] Cure default constructor called." << std::endl;
	this->_type = AMateria::_type;
}

Cure::Cure(Cure const &src) : AMateria::AMateria(src) {
	std::cout << "[C] Cure copy constructor called." << std::endl;
	*this = src;
}

Cure::~Cure() {
	std::cout << "[D] Cure default destructor called." << std::endl;
}

Cure &	Cure::operator=(Cure const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

AMateria	*Cure::clone() const {
	return (new Cure());
}

void		Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}