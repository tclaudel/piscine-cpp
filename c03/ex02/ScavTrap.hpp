#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);
		ScavTrap		&operator=(const ScavTrap &assigned);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			challengeNewcomer(std::string const &target);

	private:
		std::string		m_challenge[5];
};

#endif