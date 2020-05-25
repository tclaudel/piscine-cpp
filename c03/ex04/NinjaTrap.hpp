#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &copy);
		~NinjaTrap(void);
		NinjaTrap		&operator=(const NinjaTrap &assigned);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

		void			ninjaShoebox(NinjaTrap &target);
		void			ninjaShoebox(FragTrap &target);
		void			ninjaShoebox(ScavTrap &target);

	private:
};

#endif