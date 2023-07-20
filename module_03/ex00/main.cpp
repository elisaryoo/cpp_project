/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:56:41 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/19 13:53:05 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
	ClapTrap dible("Dible");

	dible.attack("Tunny");
	dible.takeDamage(5);
	dible.beRepaired(5);

	return (0);
}