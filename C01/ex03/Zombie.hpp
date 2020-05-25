#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Zombie
{
	public:

		Zombie(void);
		Zombie(string type, string name);
		~Zombie(void);
		void	advert(void);
		void	setName(void);
		void	setType(string type);
		string	randomName(void);

	private:
		string		m_name;
		string		m_type;
};

#endif
