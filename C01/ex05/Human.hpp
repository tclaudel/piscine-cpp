#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	public:

		Human(void);
		~Human(void);
		Brain	&getBrain();
		STRING	identify();

	private:
		Brain			m_brain;
};

#endif
