#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(const std::string name);
		Character(const Character &rhs);
		virtual ~Character(void);
		Character			&operator=(const Character &rhs);

		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
		virtual std::string const	&getName(void) const;

	private:
		Character(void);
		std::string			m_name;
		AMateria			*m_inventory[4];
};

#endif