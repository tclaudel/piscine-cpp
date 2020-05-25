/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 15:36:18 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/22 16:26:34 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(STRING name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& weapon);


	private:
		std::string		m_name;
		Weapon			*m_weapon;
};

#endif
