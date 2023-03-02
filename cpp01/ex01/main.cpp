/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:02:35 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/09 02:22:56 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name);

int main(void) {
	Zombie	*zombies;

	std::cout << "What a lovely summer day! A perfect day to have a pool party!" << std::endl;
	std::cout << "Oh no!! Some unwelcomed guests have appeared! Ruuun" << std::endl;
	zombies = zombieHorde(10, "Ducky Tube Zombie");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}