#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const &name, int apcost, int damage, std::string outputOfAttack);
		AWeapon(const AWeapon &rhs);
		virtual				~AWeapon(void);
		AWeapon				&operator=(const AWeapon &rhs);
		virtual void		attack() const = 0;

//		GETTER // SETTER

		std::string			getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;
		std::string			getOutputOfAttack(void) const;

	private:
		AWeapon(void);
		std::string			m_name;
		int					m_APCost;
		int					m_damage;
		std::string			m_outputOfAttack;
};

#endif