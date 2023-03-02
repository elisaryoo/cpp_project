/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:54:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/24 06:17:32 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string> //not sure 

int main(void) {
	int a = 100;
	int b = 20;

	std::string c = "APPLE";
	std::string d = "BANANA";

	int x = 11;
	int y = 11;

	std::cout << "< SWAP test >" << std::endl
	<< "a = " << a << std::endl
	<< "b = " << a << std::endl
	<< "Now swapping!!! 🪄" << std::endl;
	::swap(a, b);
	std::cout << "new a = " << a << std::endl
	<< "new b = " << a << std::endl;

	std::cout << std::endl;
	
	std::cout << "c = " << a << std::endl
	<< "d = " << a << std::endl
	<< "Now swapping!!! 🪄" << std::endl;
	::swap(c, d);
	std::cout << "new c = " << a << std::endl
	<< "new d = " << a << std::endl;
	
	std::cout << "< MAX test >" << std::endl
	<< "int values max(a, b) = " << ::max(a,b) << std::endl
	<< "string value max(c, d) " << ::max(c, d) << std::endl
	<< "same int values max(x, y) = " << ::max(x,y) << std::endl;

	std::cout << std::endl;

	std::cout << "< MIN test >" << std::endl
	<< "int values min(a, b) = " << ::min(a,b) << std::endl
	<< "string value min(c, d) " << ::min(c, d) << std::endl
	<< "same int values min(x, y) = " << ::min(x,y) << std::endl;
}