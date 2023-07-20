/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:42:33 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 00:43:41 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage  = 20;
}

ScavTrap::ScavTrap(const ScavTrap & cpy) : ClapTrap(cpy) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &cpy) {
	std::cout << "ScavTrap Copy assigment operator called" << std::endl;
	this->_name = cpy._name;
	this->_energyPoints = cpy._energyPoints;
	this->_hitPoints = cpy._hitPoints;
	this->_attackDamage = cpy._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "- Scavtrap " << this->_name;
	std::cout << " Gate kepper mode -" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "Scavtrap " << this->_name;
	if (this->_energyPoints <= 0)
	{
		std::cout << "don't have energy points to attack!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "is dead!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << " attacks " << target << " , causing " << this->_attackDamage << " points of damage!" << std::endl;
}