/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:25:04 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:34:43 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &cpy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cpy;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &cpy) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	return (*this);
}

std::string	Brain::getIdeas(int index) {
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	else
		return ("");
}

void	Brain::setIdeas(int index, std::string idea){
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	else
		std::cout << "Not within ideas' range!" << std::endl;
}