/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:49:53 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal"){
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = cpy;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal &cpy) {
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

std::string	AAnimal::getType() const {
	return (this->_type);
}