/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:00:38 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 19:57:46 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	std::cout << std::endl;
	try {
		Bureaucrat dummyB = Bureaucrat("Dummy bureaucrat", 151);
		std::cout << dummyB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat dummyB = Bureaucrat("Dummy bureaucrat", 0);
		std::cout << dummyB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat topB = Bureaucrat("Top bureaucrat", 1);
		std::cout << topB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat averageB = Bureaucrat("Average bureaucrat", 75);
		std::cout << averageB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat bottomB = Bureaucrat("Bottom bureaucrat", 150);
		bottomB.decrement();
		std::cout << bottomB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}