#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &rhs);
		~PlasmaRifle(void);
		PlasmaRifle			&operator=(const PlasmaRifle &rhs);
		void				attack(void) const;

	private:
};

#endif