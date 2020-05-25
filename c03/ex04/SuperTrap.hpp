#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(const std::string name);
		SuperTrap(const SuperTrap &copy);
		~SuperTrap(void);
		SuperTrap				&operator=(const SuperTrap &assigned);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
	private:
};

#endif