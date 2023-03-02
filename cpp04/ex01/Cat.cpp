/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:05 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:12:49 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cpy) : Animal(cpy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = cpy;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(const Cat &cpy) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	*(this->_brain) = *(cpy._brain);
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "🐱 Meoww...meowww...!!" << std::endl;
	return ;
}

std::string	Cat::getIdeas(int index) {
	return (this->_brain->getIdeas(index));
}

void	Cat::setIdeas(int index, std::string idea){
	return (this->_brain->setIdeas(index, idea));
}