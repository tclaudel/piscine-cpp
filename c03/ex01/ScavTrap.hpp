#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);
		ScavTrap		&operator=(const ScavTrap &assigned);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const &target);

		int				getHitPoints(void) const;
		void			setHitPoints(int const value);
		void			setMaxHitPoints(int const value);
		int				getEnergyPoints(void) const;
		void			setEnergyPoints(int const value);
		void			setMaxEnergyPoints(int const value);
		int				getLevel(void) const;
		void			setLevel(int const value);
		std::string		getName(void) const;
		void			setName(std::string const value);
		int				getMeleeAttackDamage(void) const;
		void			setMeleeAttackDamage(int const value);
		int				getRangedAttackDamage(void) const;
		void			setRangedAttackDamage(int const value);
		int				getArmorDamageReduction(void) const;
		void			setArmorDamageReduction(int const value);

	private:
		std::string		m_name;
		int				m_hitPoints;
		int				m_maxHitPoints;
		int				m_energyPoints;
		int				m_maxEnergyPoints;
		int				m_level;
		int				m_meleeAttackDamage;
		int				m_rangedAttackDamage;
		int				m_armorDamageReduction;
		std::string		m_challenge[5];
};

#endif