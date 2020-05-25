/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 16:02:35 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 09:48:12 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zfraction.h"

using namespace std;

Zfraction::Zfraction(int num, int den)
	: m_num(num), m_deninator(den)
{
}

Zfraction::Zfraction()
	: m_num(0), m_den(1)
{
	
}

ostream& operator<<(ostream& flux, Zfraction const& fraction)
{
	
}

int		main()
{
	Zfraction a(4, 5);
	Zfraction b(2);
	Zfraction c, d;

	c = a+b;
	d = a*b;

	cout << a << " + " << b << " = " << c << endl;
	cout << a << " + " << b << " = " << c << endl;

	if(a > b)
		cout << "a est plus grand que b." << endl;
	else if(a==b)
		cout << "a est egal a b." << endl;
	else
		cout << "a est plus petit que b." << endl;

	return 0;
}