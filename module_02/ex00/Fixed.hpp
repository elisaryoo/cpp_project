/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:29:58 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 07:02:20 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator=(Fixed const & numb);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_rawBit;
		static const int	_bits = 8;
};

#endif 