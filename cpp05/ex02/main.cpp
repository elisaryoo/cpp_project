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
		PresidentialPardonForm president("test president");
		Bureaucrat grade ("dummy president", 6);
		president.beSigned(grade);
		grade.executeForm(president);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		RobotomyRequestForm robot("test robot");
		Bureaucrat grade ("dummy robot", 6);
		robot.beSigned(grade);
		grade.executeForm(robot);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		ShruberryCreationForm tree("test tree");
		Bureaucrat grade ("dummy robot", 6);
		tree.beSigned(grade);
		grade.executeForm(tree);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}