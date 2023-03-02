/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:08 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:51:34 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &cpy) : AAnimal(cpy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = cpy;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=(const Dog &cpy) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	*(this->_brain) = *(cpy._brain);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "🐶 Bark!! Bark!!" << std::endl;
	return ;
}

std::string	Dog::getIdeas(int index) {
	return (this->_brain->getIdeas(index));
}

void	Dog::setIdeas(int index, std::string idea){
	return (this->_brain->setIdeas(index, idea));
}