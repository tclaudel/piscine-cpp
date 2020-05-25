#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <iomanip>
# include <sstream>
# include <fstream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &rhs);
		~Ice(void);
		Ice					&operator=(const Ice &rhs);

		AMateria			*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif