#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &rhs);
		virtual ~AssaultTerminator(void);
		AssaultTerminator			&operator=(const AssaultTerminator &rhs);

		ISpaceMarine			*clone() const;
		void					battleCry() const;
		void					rangedAttack() const;
		void					meleeAttack() const;
};

#endif