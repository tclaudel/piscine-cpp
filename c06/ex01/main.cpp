/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 10:02:15 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/07 11:06:01 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>

struct			Data
{
	std::string s1;
	int n;
	std::string s2;
};

void			*serialize(void)
{
	std::srand(time(0));
	static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

	char	*sequence = new char[(8 * sizeof(char) + sizeof(int) + 8 * sizeof(char))];
	for (int i = 0 ; i < 8; i++)
		sequence[i] = alphanum[std::rand() % 63];
	*reinterpret_cast<int *>(sequence + 8 * sizeof(char)) = std::rand();
	for (int i = 0 ; i < 8; i++)
		sequence[i + sizeof(int) + 8 * sizeof(char)] = alphanum[std::rand() % 63];
	return sequence;
}

struct Data		*deserialize(void * raw)
{
	Data *data = new Data();

	char	*sequence = reinterpret_cast<char *>(raw);
	
	data->s1 = std::string(sequence, 8 * sizeof(char));
	data->n = *reinterpret_cast<int *>(sequence + 8 * sizeof(char));
	data->s2 = std::string(sequence + 8 * sizeof(char) + sizeof(int), 8);

	return data;
}

int				main(void)
{
	void	*raw = serialize();
	char	*str;
	Data	*data = deserialize(raw);
	std::cout << "Raw value :" << std::endl;

	std::cout << "\t  ";
	str = reinterpret_cast<char *>(raw);
	for (unsigned int i = 0; i < (8 * sizeof(char)); i++)
		std::cout << str[i];
	std::cout << std::endl;
	std::cout << "\t  ";
	std::cout << *reinterpret_cast<int *>(str + 8 * sizeof(char)) << std::endl;
	std::cout << "\t  ";
	for (unsigned int i = 0; i < (8 * sizeof(char)); i++)
		std::cout << str[i + (8 * sizeof(char) + sizeof(int))];
	std::cout << std::endl << std::endl;

	std::cout << "Deserialized value :" << std::endl;
	std::cout << "s1\t: " << data->s1 << std::endl
		<< "n\t: " << data->n << std::endl
		<< "s2\t: " << data->s2 << std::endl;
	
	delete data;
	delete str;
	
}