/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:01:31 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/25 12:01:22 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int	main(void) {
	Zombie regularZombie("Regular Zombie"); 
	regularZombie.announce();

	Zombie* ptr;
	ptr = newZombie("Conehead Zombie");
	ptr->announce();
	delete ptr;

	randomChump("Bucket Head Zombie");
	return (0);
}