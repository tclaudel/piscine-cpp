/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:47:33 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/27 11:01:50 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	bright("bright");
	FragTrap	dark("dark");

	srand(time(0));
	std::cout << std ::endl;
	dark.rangedAttack("Pony");
	std::cout << "dark namae is :  " << dark.getName() << std::endl;
	bright.meleeAttack(dark.getName());
	bright.takeDamage(98);
	bright.beRepaired(100);
	bright.beRepaired(10);
	bright.vaulthunter_dot_exe("Pony");
	bright.vaulthunter_dot_exe("Pony");
	bright.vaulthunter_dot_exe("Pony");
	bright.vaulthunter_dot_exe("Pony");
	bright.vaulthunter_dot_exe("Pony");
}