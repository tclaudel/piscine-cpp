#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	public:
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &rhs);
		virtual ~Enemy(void);
		Enemy				&operator=(const Enemy &rhs);

		virtual void		takeDamage(int incDamage);

//		GETTER // SETTER

		int					getHP(void) const;
		std::string virtual	getType(void) const;
		void				setHP(int i);

	private:
		Enemy(void);
		int					m_HP;
		std::string			m_type;
};

#endif