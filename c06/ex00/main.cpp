/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 10:02:15 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/08 15:44:08 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>

int				print_nan(void)
{
	std::cout << "char\t: " << "impossible" << std::endl
		<< "int\t: " << "impossible" << std::endl
		<< "float\t: " << "nanf" << std::endl
		<< "double\t: " << "nan" << std::endl;
	return 0;
}

int				print_inf(int sign)
{
	std::cout << "char\t: " << "impossible" << std::endl
		<< "int\t: " << "impossible" << std::endl
		<< "float\t: " << (sign == 0 ? "-" : "+") << "inff" << std::endl
		<< "double\t: " << (sign == 0 ? "-" : "+") << "inf" << std::endl;
	return 0;
}

void			print_char(long double nb)
{
	if (std::isprint(static_cast<char>(nb)))
		std::cout << "char\t: '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char\t: Non displayable" << std::endl;
}

void			print_int(long double nb)
{
	if (nb > INT_MIN && nb < INT_MAX)
		std::cout << "int\t: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int\t: Overflow" << std::endl;
}

void			print_float(long double nb)
{
	if (nb > FLT_MIN && nb < FLT_MAX)
		std::cout << "float\t: " << static_cast<float>(nb) << "f" << std::endl;
	else
		std::cout << "float\t: Overflow" << std::endl;
}

void			print_double(long double nb)
{
	if (nb > DBL_MIN && nb < DBL_MAX)
		std::cout << "double\t: " << static_cast<double>(nb) << std::endl;
	else
		std::cout << "double\t: Overflow" << std::endl;
}

std::string		convert_double(std::string strdouble)
{
	return (strdouble);
}

int				main(int ac, char **av)
{
	std::string str;
	long double nb;
	
	if (ac != 2)
	{
		std::cout << "help : ./convert [string to convert]" << std::endl;
		return (0);
	}
	str = av[1];
	for (size_t i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
	if (str == "nan")
		return (print_nan());
	if (str == "+inf" || str == "+inff")
		return (print_inf(1));
	if (str == "-inf" || str == "-inff")
		return (print_inf(0));
	if (str.length() == 3 && str.at(0) == '\'' && str.at(2) == '\'')
		nb = static_cast<int>(str.at(1));
	else
	{
		if (str.at(str.length() - 1) == 'f')
			str = str.substr(0, str.length() - 1);
		try
		{
			nb = std::stold(str);
		}
		catch (const std::exception &e)
		{
			return (print_nan());
		}
	}
	std::cout << "nb\t: " << nb << std::endl;
	print_char(nb);
	print_int(nb);
	print_float(nb);
	print_double(nb);
}