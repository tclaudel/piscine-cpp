#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include <cstdlib>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(const std::string &type);
		AMateria(const AMateria &rhs);
		virtual				~AMateria(void);
		AMateria			&operator=(const AMateria &rhs);

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

//		GETTER // SETTER

		unsigned int		getXp(void) const;
		const std::string	&getType(void) const;

	private:
		AMateria(void);
		unsigned int		m_xp;
		std::string			m_type;
};

#endif