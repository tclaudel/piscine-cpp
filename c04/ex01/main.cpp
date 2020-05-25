/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 13:53:02 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/30 14:56:11 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void)
{
	Character		*bob = new Character("bob");
	AWeapon			*plasmaRifle = new PlasmaRifle();
	AWeapon			*powerFist = new PowerFist();
	Enemy			*superMutant = new SuperMutant();
	Enemy			*radScorpion = new RadScorpion();

	std::cout << *bob;
	bob->equip(powerFist);
	std::cout << *bob;
	bob->attack(superMutant);
	bob->attack(superMutant);
	bob->attack(superMutant);
	bob->attack(superMutant);
	std::cout << *bob;
	bob->equip(plasmaRifle);
	std::cout << *bob;
	bob->attack(radScorpion);
	bob->attack(radScorpion);
	bob->attack(radScorpion);
	delete bob;
	delete plasmaRifle;
	delete radScorpion;
	delete powerFist;
}