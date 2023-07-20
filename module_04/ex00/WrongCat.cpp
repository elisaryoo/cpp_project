/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:19 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 03:11:32 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & cpy) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "🐷 Oink! Oink! Oink!" << std::endl;
	return ;
}