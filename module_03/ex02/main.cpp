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
	FragTrap jimmy("Jimmy");

	jimmy.takeDamage(5);
	jimmy.attack("Pablo");
	jimmy.takeDamage(10);
	jimmy.beRepaired(2);
	jimmy.highFivesGuys();
	jimmy.takeDamage(60);
	jimmy.highFivesGuys();

	return (0);
}