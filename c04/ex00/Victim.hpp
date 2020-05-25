#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		Victim(const Victim &rhs);
		~Victim(void);
		Victim				&operator=(const Victim &assigned);
		void				getPolymorphed(void) const;
		std::string			getName(void) const;
		void				setName(std::string const value);

	protected:
		Victim(void);
		std::string			m_name;
};

std::ostream		&operator<<(std::ostream &flux, const Victim &rhs);

#endif