/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:00:38 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 22:55:55 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	std::cout << std::endl;
	try {
		Form dummyB = Form ("Dummy Form", 1, 151);
		std::cout << dummyB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Form dummyB = Form("Dummy Form", 0, 150);
		std::cout << dummyB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat topB = Bureaucrat("Your top bureaucrat", 1);
		Form topF = Form("Top Form", 1, 100);
		topB.signForm(topF);
		std::cout << topF;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat averageB = Bureaucrat("Your average bureaucrat", 74);
		Form averageF = Form("Average Form", 75, 120);
		averageB.signForm(averageF);
		std::cout << averageF;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat bottomB = Bureaucrat("Your bottom bureaucrat", 130);
		Form bottomF = Form("Bottom Form", 20 , 150);
		bottomB.signForm(bottomF);
		std::cout << bottomB;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}