/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:51:31 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/22 00:22:07 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &cpy) {
	*this = cpy;
}

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &cpy) {
	(void)cpy;
	return (*this);
}

const char* Intern::NoFormMatch::what() const throw() {
	return ("No form matched");
}

AForm* Intern::invalidForm(const std::string target) const {
	std::cout << "Intern creat- wait...There's no such form, whops ha ha" << std::endl;
	std::cout << "I apologize, it is my first day here!" << std::endl;
	(void)target;
	return (NULL);
}

AForm* Intern::presidentialPardonForm(const std::string target) const {
	std::cout << "Intern creating presidential pardom form" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm* Intern::robotomyRequestForm(const std::string target) const {
	std::cout << "Intern creating robotomy request form" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm* Intern::shruberryCreationForm(const std::string target) const {
	std::cout << "Intern creating shruberry creation form" << std::endl;
	return (new ShruberryCreationForm(target));
}

AForm* Intern::makeForm(const std::string name, const std::string target) {
	std::string formOptions[4] = {"invalid form", "presidential pardon", 
								"robotomy request", "shruberry creation"};
	AForm* (Intern::*f[4])(const::std::string) const = {
		&Intern::invalidForm,
		&Intern::presidentialPardonForm,
		&Intern::robotomyRequestForm,
		&Intern::shruberryCreationForm,
	};

	for (int i = 0; i < 4; i++) {
		if (!formOptions[i].compare(name)) {
			return ((this->*f[i])(target));
		}
	}
	throw Intern::NoFormMatch();
	return((this->*f[4])(target));
}