/* ************************************************************************** */
/*                                  -=   //                                       */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:04:15 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 08:23:24 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(8);
	Fixed d(4);

	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	std::cout << "Should be 4: "<< Fixed::min( c , d ) << std::endl;

	Fixed x(10);
	Fixed y(11);
	Fixed z(11);

	std::cout << std::boolalpha << "Should be true: " << (y == z) << std::endl;
	std::cout << std::boolalpha << "Should be true: " << (x != y) << std::endl;
	std::cout << std::boolalpha << "Should be true: " << (y <= z) << std::endl;
	std::cout << std::boolalpha << "Should be false: " << (x == z) << std::endl;
	std::cout << std::boolalpha << "Should be false: " << (y != z) << std::endl;
	std::cout << std::boolalpha << "Should be false: " << (x >= z) << std::endl;

	return 0;
}