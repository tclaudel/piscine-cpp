#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include "Zombie.hpp"
# include "ZombieEvent.hpp"

class ZombieEvent
{
	public:

		ZombieEvent(STRING type);
		~ZombieEvent(void);
		void		setZombieType(STRING type);
		Zombie		*newZombie(STRING name);
		Zombie		*randomChump();

	private:
		STRING		m_type;
};

#endif
