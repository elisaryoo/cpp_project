/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:36:55 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/14 03:13:12 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " 
	<< this->_weapon.getType() << std::endl;
}