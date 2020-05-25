/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 11:17:03 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 15:53:08 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

using namespace std;

Hero::Hero() : m_max_life(20), m_max_mana(10),
	m_weapon_name("epee rouillee"), m_weapon_dmg(4)
{
	m_life = m_max_life;
	m_mana = m_max_mana;
}

int	random_d(int d)
{
	srand(time(0));
	return (rand() % d);
}

void	Hero::damage_taken(int d)
{
	m_life -= random_d(d);
	cout << m_life << endl;
	if (m_life < 0);
		m_life = 0;
}

void	Hero::life_potion(int d)
{
	m_life += random_d(d);

	if (m_life > m_max_life);
		m_life = m_max_life;
}

void	Hero::attack(Hero &cible)
{
	cible.damage_taken(m_weapon_dmg);
}

void	Hero::change_weapon(string weapon_name, int weapon_dmg)
{
	m_weapon_name = weapon_name;
	m_weapon_dmg = weapon_dmg;
}

void	Hero::diplay_life()
{
	cout << m_life;
}

bool	Hero::is_alive()
{
	return (m_life > 0);
}

int		main()
{
	Hero david, goliath;

	goliath.attack(david);
	david.life_potion(20);
	goliath.diplay_life();
	goliath.attack(david);
	goliath.diplay_life();
	david.attack(goliath);
	goliath.change_weapon((string)"Double hache tranchante vénéneuse de la mort", 8);
	goliath.diplay_life();
	goliath.attack(david);
	goliath.diplay_life();
	cout << "goliath got ";
	goliath.diplay_life();
	cout << " life points" << endl;
	return 0;
}