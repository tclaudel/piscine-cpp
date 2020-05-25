#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		FragTrap			&operator=(const FragTrap &assigned);

		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				vaulthunter_dot_exe(std::string const &target);

	private:
		void				goomedAttack(std::string const &target);
		void				choucrouteRainAttack(std::string const &target);
		void				chestnutBurstAttack(std::string const &target);
		void				bananaShotAttack(std::string const &target);
		void				towelShotAttack(std::string const &target);
};

#endif