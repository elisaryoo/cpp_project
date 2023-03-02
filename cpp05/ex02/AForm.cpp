/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:01:07 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 22:57:56 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Bureaucrat"), _signed(false), _signGrade(150), _executeGrade(150) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signedGrade, int executeGrade) : _name(name), _signed(false), _signGrade(signedGrade), _executeGrade(executeGrade) {
	std::cout << "AForm name/signedGrade/execGrade default constructor called" << std::endl;
	if (this->_executeGrade < 1 || this->_signGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->_executeGrade > 150 || this->_signGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &cpy) : _name(cpy._name), _signed(cpy.getSigned()), _signGrade(cpy.getSignGrade()), _executeGrade(cpy.getExecuteGrade()) {
	std::cout << "AForm copy constructor called" << std::endl;
	*this = cpy;
}

AForm & AForm::operator=(const AForm & cpy) {
	std::cout << "AForm copy assigment operator called" << std::endl;
	this->_signed = cpy.getSigned();
	return (*this);
}

std::string AForm::getName() const {
	return (this->_name);
}

bool		AForm::getSigned() const {
	return (this->_signed);
}

unsigned int			AForm::getSignGrade() const {
	return (this->_signGrade);
}

unsigned int			AForm::getExecuteGrade() const {
	return (this->_executeGrade);
}

void		AForm::beSigned(const Bureaucrat &cpy) {
	if (cpy.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high.");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low.");
}

std::ostream & operator<<(std::ostream & o,const AForm &cpy) {
	o << "Name: " << cpy.getName() << std::endl;
	o << "Signed: " << cpy.getSigned() << std::endl;
	o << "Required signed grade: " << cpy.getSignGrade() << std::endl;
	o << "Required executed grade: " << cpy.getExecuteGrade() << std::endl;
	return (o);
}

