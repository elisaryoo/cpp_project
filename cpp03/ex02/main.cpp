/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:42:31 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 01:15:34 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main () {
	FragTrap a("Jimmy");

	a.attack("Pablo");
	a.takeDamage(5);
	a.takeDamage(10);
	a.beRepaired(2);
	a.highFivesGuys();
	a.takeDamage(60);
	return (0);
}