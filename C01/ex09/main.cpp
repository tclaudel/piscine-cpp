/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 14:31:17 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/23 15:03:43 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger log("test.log");

	log.log("console", "Starting ...");
	log.log("file", "Test log on file");
	log.log("console", "It works !");
}