/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:30:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 06:57:58 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBit(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &fixed) {
	std::cout << "Copy constructor called" << std::endl; 
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBit);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBit = raw;
}

Fixed & Fixed::operator=(Fixed const & cpy) {
	std::cout << "Copy assgiment operator called" << std::endl;

	this->_rawBit = cpy.getRawBits();
	return (*this);
}
