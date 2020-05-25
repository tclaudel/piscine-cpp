/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 15:36:11 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/22 16:00:37 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(STRING name, Weapon& m_weapon);
		~HumanA(void);
		void	attack(void);

	private:
		std::string		m_name;
		Weapon&			m_weapon;
};

#endif
