/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 11:00:07 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/23 11:01:53 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	phillipe;

	STRING target = "Munchkin";

	phillipe.action("melee", target);
	phillipe.action("ranged", target);
	phillipe.action("intimidatingShout", target);
}