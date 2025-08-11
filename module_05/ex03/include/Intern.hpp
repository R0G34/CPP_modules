#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef std::string str;

class AForm;
class Bureaucrat;

class Intern {
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &	operator=(Intern const &rSym);

		AForm *		makeForm(str form, Bureaucrat & target) const;

		class WrongNameException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
	private:
		AForm *		makePresidential(Bureaucrat & target) const;
		AForm *		makeRobotomy(Bureaucrat & target) const;
		AForm *		makeShrubbery(Bureaucrat & target) const;
};

#endif