/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:43:13 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:56:53 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
AForm("RobotomyForm", 72, 45), _target("Dummy") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
AForm("RobotomyForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : 
AForm("RobotomyForm", 72, 45) {
	*this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy) {
	this->_target = cpy._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &cpy) const {
	if (cpy.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	else {
		std::cout << "drill noises happening: **BZZZZrr....BZZZrrrr.rrr...BZZZZZ**" << std::endl;
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized! " << std::endl;
		else
			std::cout << "The robotomy failed :(" << std::endl;
	}
	return ;
}