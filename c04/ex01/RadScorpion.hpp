#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(const RadScorpion &rhs);
		~RadScorpion(void);
		RadScorpion			&operator=(const RadScorpion &rhs);
	private:
};

#endif