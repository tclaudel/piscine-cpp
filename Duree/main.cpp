/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:20:15 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/18 15:25:27 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

using namespace std;

bool operator<(Duree const &a, Duree const& b)
{
	return a.estPlusPetitQue(b);
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
	if (m_heures < b.m_heures)
		return true; 
	else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
		return true;
	else if (m_heures == b.m_heures && m_minutes == b.m_minutes
		&& m_secondes < b.m_secondes)
		return true;
	else
		return false;
}

Duree::Duree(int heures, int minutes, int secondes) :
	m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
	m_secondes = secondes;
	m_minutes += m_secondes / 60;
	m_secondes = m_secondes % 60;
	m_heures += m_minutes / 60;
	m_minutes = m_minutes % 60;
	dprintf(1, "%.2dh %.2dm %.2ds\n", m_heures, m_minutes, m_secondes);
}

int		main()
{
	Duree duree1(0, 10, 28), duree2(4, 2, 13);

	if (duree1 < duree2)
		cout << "La premiere duree est plus petite\n";
	else
		cout << "La premiere duree n'est pas plus petite\n";

	return 0;
}