/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:27:35 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/23 08:31:24 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void) {
	Data* test = new Data(100, "Hello!");
	Data*	 deserialize;
	uintptr_t serialized;

	std::cout << "Test adress: " << test << std::endl
	<< "<Test values>" << std::endl
	<< " Favorite number: " << test->getFaveNumber() << std::endl
	<< " Greeting: " << test->getGretting() << std::endl;

	serialized = test->serialize(test);

	std::cout << std::endl;
	std::cout << "Serialized value: " << serialized << std::endl;
	std::cout << std::endl;
	
	deserialize = test->deserialize(serialized);

	std::cout << "Deserialize adress: " << deserialize << std::endl
	<< "<Test values>" << std::endl
	<< " Favorite number: " << test->getFaveNumber() << std::endl
	<< " Greeting: " << test->getGretting() << std::endl;
	
	delete test;
}