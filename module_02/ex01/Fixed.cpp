/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:30:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 07:30:42 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBit(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBit = nbr << this->_bits;
}

Fixed::Fixed(const float nbr) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBit = roundf(nbr * (1 << this->_bits));
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

Fixed & Fixed::operator=(Fixed const & cpy) {
	std::cout << "Copy assgiment operator called" << std::endl;

	this->_rawBit = cpy.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const {
	return (this->_rawBit >> Fixed::_bits);
}

float	Fixed::toFloat(void) const {
	return ((float)this->_rawBit / (1 << this->_bits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & cpy) {
	out << cpy.toFloat();
	return (out);
}
