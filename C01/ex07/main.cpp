/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 09:54:14 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/23 10:22:49 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

# define STRING std::string
# define COUT std::cout
# define ENDL std::endl

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		COUT << "Bad input : ./replace [filename] [s1] [s2]";
		return (1);
	}
	STRING		filename = av[1];
	STRING		s1 = av[2];
	STRING		s2 = av[3];
	STRING		outputfd;
	STRING		buff;
	size_t		found;

	if (s1.empty())
	{
		COUT << "s1 can't be empty";
		return (1);
	}
	if (s2.empty())
	{
		COUT << "s2 can't be empty";
		return (1);
	}

	std::ifstream	fdin(filename);

	if (!fdin)
	{
		COUT << "Could not open this file : " << filename << ENDL;
		return(1);
	}

	outputfd = filename + ".replace";

	std::ofstream	fdout(outputfd);
	if (!fdout)
	{
		COUT << "Could create this file : " << outputfd << ENDL;
		return(1);
	}
	while (std::getline(fdin, buff))
	{
		while((found = buff.find(s1)) != std::string::npos)
		{
			buff.replace(found, s1.length(), s2);
		}
		fdout << buff;
		fdout << ENDL;
	}
	fdout << ENDL;
	fdin.close();
	fdout.close();
}