/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:58:37 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 00:31:38 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap johnny("Johnny");
	ClapTrap fakeJohnny("Fake Johnny");

	//ScavTrap attack version
	johnny.attack("Willy");
	//ClapTrap attack version
	fakeJohnny.attack("Fake Willy");

	johnny.guardGate();
	johnny.takeDamage(55);
	johnny.beRepaired(6);
	johnny.takeDamage(35);

	return (0);
}