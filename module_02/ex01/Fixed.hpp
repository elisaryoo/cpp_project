/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:29:58 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 07:49:41 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator=(Fixed const & nbr);

		int		getRawBits(void) const;
		int		toInt(void) const;
		float		toFloat(void) const;

	private:
		int					_rawBit;
		static const int	_bits = 8;
};

std::ostream & operator<<(std::ostream & out, Fixed const & cpy);

#endif 