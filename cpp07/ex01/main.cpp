/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:54:58 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/01 02:32:48 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int main (void) {
	int array[] = {1, 2, 3, 4, 5};

	std::cout << "before: " << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;
	::iter(array, 5, &addOne);
	std::cout << "after: " << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;

	std::cout << std::endl;

	std::string names[] = {"Sally", "Kelly", "Jelly"};

	std::cout << "before: " << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << names[i] << std::endl;
	::iter(names, 3, &printMe);
	std::cout << "after: " << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << names[i] << std::endl;
}