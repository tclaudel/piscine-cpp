#ifndef WEAPON_HPP
# define WEAPON_HPP

# define STRING std::string
# define COUT std::cout
# define ENDL std::endl

# include <string>
# include <iostream>
# include <sstream>

class Weapon
{
	public:
		Weapon(STRING type);
		~Weapon(void);
		void			setType(STRING);
		const STRING&	getType(void);

	private:
		std::string		m_type;
};

#endif
