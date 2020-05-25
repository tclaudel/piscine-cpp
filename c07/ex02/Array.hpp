/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 14:30:47 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/07 14:30:47 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{
	public:
		Array<T>(void) : m_array(NULL), m_n(0) {}

		Array<T>(unsigned int n) : m_n(n)
		{
			m_array = new T[n];
		}

		Array<T>(const Array &rhs) {
			*this = rhs;
		}

		~Array(void) {}

		Array				&operator=(const Array &rhs) {
			m_n = rhs.m_n;
			delete m_array;
			m_array = new T[m_n];
			for (unsigned int i = 0; i < m_n; i++)
				m_array[i] = rhs.m_array[i];
		}

		T					&operator[](unsigned int n)
		{
			if (n >= m_n)
				throw std::exception();
			return (m_array[n]);
		}

		unsigned int		size() const
		{
			return (m_n);
		}

	private:
		T					*m_array;
		unsigned int		m_n;
};

#endif