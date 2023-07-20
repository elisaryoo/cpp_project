/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:05 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 03:15:59 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &cpy) : Animal(cpy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &cpy) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "🐱 Meoww...meowww...!!" << std::endl;
	return ;
}