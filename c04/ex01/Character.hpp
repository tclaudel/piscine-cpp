#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include <iostream>
# include <fstream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const name);
		Character(const Character &rhs);
		~Character(void);
		Character			&operator=(const Character &rhs);

		void				attack(Enemy *enemy);
		void				equip(AWeapon *wepon);
		void				recoverAP(void);

//		GETTER // SETTER

		int					getAp(void) const;
		AWeapon				*getWeapon(void) const;
		std::string			getName(void) const;

	private:
		Character(void);
		int					m_ap;
		AWeapon				*m_weapon;
		std::string			m_name;
};

std::ostream	&operator<<(std::ostream &flux, const Character &rhs);

#endif