/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:20:26 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 09:57:48 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_DUREE
# define DEF_DUREE

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Duree
{
	public:

	Duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool	estPlusPetitQue(Duree const& b) const;

	private:

	int m_heures;
	int m_minutes;
	int m_secondes;
};

#endif