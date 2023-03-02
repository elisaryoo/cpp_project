/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:48:38 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/22 00:24:44 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {
	try {
		std::cout << "Robotomy" << std::endl;
		Intern overWorker;
		AForm *pt;
		pt = overWorker.makeForm("robotomy request", "Tommy");
		Bureaucrat grade = Bureaucrat("Dummy", 1);
		pt->beSigned(grade);
		pt->execute(grade);
		delete pt;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Presidential" << std::endl;
		Intern overWorker;
		AForm *pt;
		pt = overWorker.makeForm("presidential pardon", "Tommy");
		Bureaucrat grade = Bureaucrat("Dummy", 1);
		pt->beSigned(grade);
		pt->execute(grade);
		delete pt;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Shruberry" << std::endl;
		Intern overWorker;
		AForm *pt;
		pt = overWorker.makeForm("shruberry creation", "Tommy");
		Bureaucrat grade = Bureaucrat("Dummy", 1);
		pt->beSigned(grade);
		pt->execute(grade);
		delete pt;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		std::cout << "Invalid" << std::endl;
		Intern overWorker;
		AForm *pt;
		pt = overWorker.makeForm("invalid form", "Tommy");
		delete pt;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}