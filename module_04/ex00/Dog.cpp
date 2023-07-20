/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:08 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 03:16:20 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &cpy) : Animal(cpy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &cpy) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "🐶 Bark!! Bark!!" << std::endl;
	return ;
}