#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include <iostream>
# include <string>
# include <ctime>
# include <iomanip>
# include <sstream>
# include <fstream>
# include "TacticalMarine.hpp"
# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int				getCount() const = 0;
		virtual ISpaceMarine	*getUnit(int index) const = 0;
		virtual int				push(ISpaceMarine *marine) = 0;
};

#endif