#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

typedef std::string str;

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure &	operator=(Cure const &rSym);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
	private:
		str	_type;
};

#endif