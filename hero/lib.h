#ifndef DEF_PERSONNAGE
# define DEF_PERSONNAGE

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include <string>

int		random_d(int d);

class	Hero
{
	public:

	Hero();
	void	damage_taken(int dmg);
	void	attack(Hero &cible);
	void	life_potion(int life_restaured);
	void	change_weapon(std::string weapon_name, int weapon_dmg);
	bool	is_alive();
	void	diplay_life();

	private:

	int			m_max_life;
	int			m_life;
	int			m_max_mana;
	int			m_mana;
	std::string	m_weapon_name;
	int			m_weapon_dmg;
};

#endif