/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:29:58 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 08:10:50 by eryoo            ###   ########.fr       */
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

		bool operator>(Fixed const & nbr);
		bool operator<(Fixed const & nbr);
		bool operator>=(Fixed const & nbr);
		bool operator<=(Fixed const & nbr);
		bool operator==(Fixed const & nbr);
		bool operator!=(Fixed const & nbr);

		Fixed operator+(Fixed const & nbr);
		Fixed operator-(Fixed const & nbr);
		Fixed operator*(Fixed const & nbr);
		Fixed operator/(Fixed const & nbr);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed & min(Fixed & x, Fixed & y);
		static const Fixed & min(Fixed const & x, Fixed const & y);
		static Fixed & max(Fixed & x, Fixed & y);
		static const Fixed & max(Fixed const & x, Fixed const & y);

		int		getRawBits(void) const;
		void	setRawBits(int const nbr);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					_rawBit;
		static const int	_bits = 8;
};

std::ostream & operator<<(std::ostream & out, Fixed const & cpy);

#endif 