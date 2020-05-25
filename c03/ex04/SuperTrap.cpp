#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
}

SuperTrap::SuperTrap(const std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5),
	FragTrap(name), NinjaTrap(name)
{
}

SuperTrap::SuperTrap(const SuperTrap &rhs) : ClapTrap(rhs),
	FragTrap(rhs), NinjaTrap(rhs)
{
}

SuperTrap::~SuperTrap(void)
{
}

SuperTrap			&SuperTrap::operator=(const SuperTrap &rhs)
{
	(void)rhs;
	return (*this);
}

void			SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void			SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}