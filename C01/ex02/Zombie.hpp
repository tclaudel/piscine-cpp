#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# define STRING std::string
# include <string>
# include <iostream>

class Zombie
{
	public:

		Zombie(STRING type, STRING name);
		~Zombie(void);
		void	advert(void);

	private:
		STRING		m_name;
		STRING		m_type;
};

#endif
