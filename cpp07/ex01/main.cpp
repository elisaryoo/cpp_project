/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:54:58 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 22:08:38 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int main (void) {
	int numbers[] = {1, 2, 3, 4, 5};
	char letters[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "Printing numbers: " << std::endl;
	::iter(numbers, 5, &printMe);
	std::cout << std::endl;

	std::cout << "Printing letters: " << std::endl;
	::iter(letters, 5, &printMe);
	std::cout << std::endl;
}