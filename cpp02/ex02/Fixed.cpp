/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:30:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 08:14:13 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBit(0) {}

Fixed::Fixed(const int nbr) {
	this->_rawBit = nbr << this->_bits;
}

Fixed::Fixed(const float nbr) {
	this->_rawBit = roundf(nbr * (1 << this->_bits));
}

Fixed::Fixed( Fixed const &fixed) {
	*this = fixed;
}

Fixed::~Fixed() {}

int		Fixed::getRawBits() const {
	return (this->_rawBit);
}

void	Fixed::setRawBits(int const nbr) {
	this->_rawBit = nbr;
}

Fixed & Fixed::operator=(Fixed const & cpy) {
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

bool	Fixed::operator>(Fixed const & nbr) {
	return (this->getRawBits() > nbr.getRawBits());
}

bool	Fixed::operator<(Fixed const & nbr) {
	return (this->getRawBits() < nbr.getRawBits());
}
bool	Fixed::operator>=(Fixed const & nbr) {
	return (this->getRawBits() >= nbr.getRawBits());
}

bool	Fixed::operator<=(Fixed const & nbr) {
	return (this->getRawBits() <= nbr.getRawBits());
}

bool	Fixed::operator==(Fixed const & nbr) {
	return (this->getRawBits() == nbr.getRawBits());
}

bool	Fixed::operator!=(Fixed const & nbr) {
	return (this->getRawBits() != nbr.getRawBits());
}

Fixed Fixed::operator+(Fixed const & nbr) {
	Fixed temp;
	temp.setRawBits(this->getRawBits() + nbr.getRawBits());
	return (temp);
}

Fixed Fixed::operator-(Fixed const & nbr) {
	Fixed temp;
	temp.setRawBits(this->getRawBits() - nbr.getRawBits());
	return (temp);
}

Fixed Fixed::operator*(Fixed const & nbr) {
	Fixed temp;
	temp.setRawBits(this->getRawBits() * nbr.getRawBits());
	return (temp);
}

Fixed Fixed::operator/(Fixed const & nbr) {
	Fixed temp;
	temp.setRawBits(this->getRawBits() / nbr.getRawBits());
	return (temp);
}

Fixed Fixed::operator++() {
	Fixed temp;
	temp._rawBit = ++_rawBit;
	return (temp);
}

Fixed Fixed::operator++(int) {
	Fixed temp;
	temp._rawBit = _rawBit++;
	return (temp);
}

Fixed Fixed::operator--() {
	Fixed temp;
	temp._rawBit = --_rawBit;
	return (temp);
}

Fixed Fixed::operator--(int) {
	Fixed temp;
	temp._rawBit = _rawBit--;
	return (temp);
}

Fixed & Fixed::min(Fixed & x, Fixed & y) {
	if (x.getRawBits() < y.getRawBits())
		return (x);
	return (y);
}

const Fixed & Fixed::min(Fixed const & x, Fixed const & y) {
	if (x.getRawBits() < y.getRawBits())
		return (x);
	return (y);
}

Fixed & Fixed::max(Fixed & x, Fixed & y) {
	if (x.getRawBits() > y.getRawBits())
		return (x);
	return (y);
}

const Fixed & Fixed::max(Fixed const & x, Fixed const & y) {
	if (x.getRawBits() > y.getRawBits())
		return (x);
	return (y);
}