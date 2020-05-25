#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
	public:
		Pony(void);
		void				setName(std::string name);
		void				setOwner(std::string name);
		void				setAge(int age);
		std::string			getName(void);
		std::string			getOwner(void);
		int					getAge(void);

	private:
		std::string		m_name;
		std::string		m_owner;
		int				m_age;
};

#endif
