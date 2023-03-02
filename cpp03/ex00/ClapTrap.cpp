/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:56:37 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/19 23:55:54 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),  _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &cpy) {
	std::cout << "Copy assigment operator called" << std::endl;
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_attackDamage = cpy._attackDamage;
	this->_energyPoints = cpy._energyPoints;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "Claptrap " << this->_name;
	if(this->_energyPoints <= 0)
	{
		std::cout << "don't have energy or hit points to attack!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_attackDamage++;
	std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name;
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << " is suffering " << amount << " points of damage" << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	std::cout << "Currently has " << this->_hitPoints << " points of health" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name;
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << " can't recover, oh no!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << " recovered " << amount << " points, now all healthy and good!" << std::endl;
}