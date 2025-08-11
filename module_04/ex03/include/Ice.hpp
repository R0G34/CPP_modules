#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>

typedef std::string str;

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice &	operator=(Ice const &rSym);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
	private:
		str	_type;
};

#endif