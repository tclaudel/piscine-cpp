#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine &rhs);
		virtual ~TacticalMarine(void);
		TacticalMarine			&operator=(const TacticalMarine &rhs);

		ISpaceMarine			*clone() const;
		void					battleCry() const;
		void					rangedAttack() const;
		void					meleeAttack() const;
};

#endif