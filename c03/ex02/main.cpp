/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:47:33 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/26 14:53:15 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	frag("frag");
	FragTrap	frag2("frag2");
	ScavTrap	scav("Scav");

	frag = frag2;
	std::cout << "energy points : " << frag.getEnergyPoints() << std::endl;
	frag.vaulthunter_dot_exe("goul");
	std::cout << "energy points : " << frag.getEnergyPoints() << std::endl;
	frag.takeDamage(45);
	frag.takeDamage(66);
	frag.takeDamage(1);
	FragTrap	newFrag("new frag");
	// scav.challengeNewcomer(newFrag.getName());
}