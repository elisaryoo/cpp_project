/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:42:27 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 01:16:26 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage  = 30;
}

FragTrap::FragTrap(const FragTrap & cpy) : ClapTrap(cpy) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & cpy) {
	std::cout << "FragTrap Copy assigment operator called" << std::endl;
	this->_name = cpy._name;
	this->_energyPoints = cpy._energyPoints;
	this->_hitPoints = cpy._hitPoints;
	this->_attackDamage = cpy._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "Fragtrap " << this->_name;
	std::cout << " Good job everyone! High five 😆🤚 Yeah!" << std::endl;
}