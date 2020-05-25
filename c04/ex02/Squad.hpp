#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

class Squad : public ISquad
{
	struct		marinelink
	{
		ISpaceMarine		*marine;
		struct marinelink	*next;
	};

	public:
		Squad(void);
		Squad(const Squad &rhs);
		virtual ~Squad(void);
		Squad				&operator=(const Squad &rhs);

		int					getCount() const;
		ISpaceMarine		*getUnit(int index) const;
		int					push(ISpaceMarine *marine);

	private:
		bool				alreadyIn(ISpaceMarine *marine);
		int					m_units;
		struct marinelink	*m_marines;
};

#endif