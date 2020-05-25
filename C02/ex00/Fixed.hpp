/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 10:54:57 by tclaudel          #+#    #+#             */
/*   Updated: 2020/03/24 11:32:49 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);
		Fixed				&operator=(const Fixed &affectation);
		int					getRawBits(void) const;
		void				setRawBits(int const value);

	private:
		int					m_rawBits;
		static const int	m_bitsNb;
};

#endif