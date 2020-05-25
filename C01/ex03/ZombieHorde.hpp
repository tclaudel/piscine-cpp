#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieHorde
{
	public:

		ZombieHorde(int n);
		~ZombieHorde(void);
		void	announce();

	private:
		int				m_amount;
		Zombie			*m_horde;
};

#endif
