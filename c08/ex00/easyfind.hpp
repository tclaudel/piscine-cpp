/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 14:29:13 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/08 09:52:16 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>

template <typename T>

int		easyfind(T &array, int nb)
{
	typename	T::iterator it;

	it = std::find(array.begin(), array.end(), nb);
	if (it == array.end())
		throw std::exception();
	return *it;
}

#endif