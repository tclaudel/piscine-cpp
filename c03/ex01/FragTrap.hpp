#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# define WHITE_BOLD "\033[2;37m"
# define RESET "\033[0m"
# define LIGHT_RED "\033[0;31;5;110m"
# define FLASH_GREEN "\033[33;32m"
# define GREEN "\033[1;32;111m"

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		FragTrap			&operator=(const FragTrap &assigned);

		void				rangedAttack(std::string const &target);
		void				meleeAttack(std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				vaulthunter_dot_exe(std::string const &target);

		//	Getter - Setter

		int					getHitPoints(void) const;
		void				setHitPoints(int const value);
		int					getMaxHitPoints(void) const;
		int					getEnergyPoints(void) const;
		void				setEnergyPoints(int const value);
		int					getMaxEnergyPoints(void) const;
		int					getLevel(void) const;
		void				setLevel(int const value);
		std::string			getName(void) const;
		void				setName(std::string const value);
		int					getMeleeAttackDamage(void) const;
		void				setMeleeAttackDamage(int const value);
		int					getRangedAttackDamage(void) const;
		void				setRangedAttackDamage(int const value);
		int					getArmorDamageReduction(void) const;
		void				setArmorDamageReduction(int const value);

	private:
		void				goomedAttack(std::string const &target);
		void				choucrouteRainAttack(std::string const &target);
		void				chestnutBurstAttack(std::string const &target);
		void				bananaShotAttack(std::string const &target);
		void				towelShotAttack(std::string const &target);
		std::string			m_name;
		int					m_hitPoints;
		int					m_maxHitPoints;
		int					m_energyPoints;
		int					m_maxEnergyPoints;
		int					m_level;
		int					m_meleeAttackDamage;
		int					m_rangedAttackDamage;
		int					m_armorDamageReduction;
};

#endif