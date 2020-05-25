#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>
# define WHITE_BOLD "\033[2;37m"
# define RESET "\033[0m"
# define LIGHT_RED "\033[0;31;5;110m"
# define FLASH_GREEN "\033[33;32m"
# define GREEN "\033[1;32;111m"

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name, int hitPoints, int maxhitPoints, int energyPoints,
			int maxEnergyPoints, int m_level, int meleeAttackDamage,
			int rangedAttackDamage, int armorDamageReduction);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap(void);
		ClapTrap		&operator=(const ClapTrap &assigned);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		int				getHitPoints(void) const;
		void			setHitPoints(int const value);
		int				getEnergyPoints(void) const;
		void			setEnergyPoints(int const value);
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

	protected:
		std::string	m_name;
		int			m_hitPoints;
		int			m_maxHitPoints;
		int			m_energyPoints;
		int			m_maxEnergyPoints;
		int			m_level;
		int			m_meleeAttackDamage;
		int			m_rangedAttackDamage;
		int			m_armorDamageReduction;
};

#endif