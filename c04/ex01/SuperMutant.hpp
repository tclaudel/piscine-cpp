#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant &rhs);
		~SuperMutant(void);
		SuperMutant			&operator=(const SuperMutant &rhs);

		virtual void		takeDamage(int incamage);
	private:
};

#endif