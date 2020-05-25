/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:45:22 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/19 17:24:01 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

std::string		s_toupper(std::string s)
{
	size_t		i = 0;

	while (i < s.size())
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}

int				main(int ac, char **av)
{
	size_t	i = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else if (ac >= 1 && av[1] == "Damnit")
	{
		std::cout << "DAMNIT";
		i++;
	}
	while (i < ac)
		std::cout << s_toupper(av[i++]);
	std::cout << "\n";
	return (0);
}