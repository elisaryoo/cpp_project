/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:16 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 02:54:39 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &cpy) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "oink...? meow...? bark...? moo...? " << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}