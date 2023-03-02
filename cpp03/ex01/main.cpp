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
	ScavTrap a("Johnny");
	
	a.attack("Willy");
	a.takeDamage(6);
	a.takeDamage(30);
	a.beRepaired(6);
	a.guardGate();
	a.takeDamage(50);

	return (0);
}