/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 02:39:37 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &cpy) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Animal::makeSound() const {
	std::cout << "oink...? meow...? bark...? moo...? " << std::endl;
}

std::string	Animal::getType() const {
	return (this->_type);
}