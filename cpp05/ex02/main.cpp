/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:00:38 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 22:58:56 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	std::cout << std::endl;
	try {
		std::cout << "Fail form" << std::endl;
		Bureaucrat grade ("fail president", 10);
		PresidentialPardonForm president("test president");
		president.beSigned(grade);
		grade.executeForm(president);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Unsigned fail form" << std::endl;
		Bureaucrat grade ("dummy president", 3);
		PresidentialPardonForm president("test president");
		grade.executeForm(president);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Presidential form" << std::endl;
		Bureaucrat grade ("dummy president", 3);
		PresidentialPardonForm president("test president");
		president.beSigned(grade);
		grade.executeForm(president);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Robotomy form" << std::endl;
		Bureaucrat grade ("dummy robot", 10);
		RobotomyRequestForm robot("test robot");
		robot.beSigned(grade);
		grade.executeForm(robot);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Shruberry form" << std::endl;
		Bureaucrat grade ("dummy robot", 10);
		ShruberryCreationForm tree("test tree");
		tree.beSigned(grade);
		grade.executeForm(tree);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}