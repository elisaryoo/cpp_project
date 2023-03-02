/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:43:07 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:56:51 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialForm", 25, 5), _target("IDK") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm("PresidentialForm", 25, 5) {
	*this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy) {
	this->_target = cpy._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &cpy) const {
	if (cpy.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	return ;
}