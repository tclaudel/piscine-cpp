#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include <fstream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &rhs);
		~Sorcerer(void);
		Sorcerer			&operator=(const Sorcerer &assigned);
		void				polymorph(Victim const &victim) const;
		std::string			getName(void) const;
		void				setName(std::string const value);
		std::string			getTitle(void) const;
		void				setTitle(std::string const value);

	private:
		Sorcerer(void);
		std::string			m_name;
		std::string			m_title;
};

std::ostream		&operator<<(std::ostream &flux, const Sorcerer &rhs);

#endif