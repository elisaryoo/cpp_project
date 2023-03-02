/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:01:07 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 23:22:18 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Bureaucrat"), _signed(false), _signGrade(150), _executeGrade(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signedGrade, int executeGrade) : _name(name), _signed(false), _signGrade(signedGrade), _executeGrade(executeGrade) {
	std::cout << "Form name/signedGrade/execGrade default constructor called" << std::endl;
	if (this->_executeGrade < 1 || this->_signGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_executeGrade > 150 || this->_signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &cpy) : _name(cpy._name), _signed(cpy.getSigned()), _signGrade(cpy.getSignGrade()), _executeGrade(cpy.getExecuteGrade()) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = cpy;
}

Form & Form::operator=(const Form & cpy) {
	std::cout << "Form copy assigment operator called" << std::endl;
	this->_signed = cpy.getSigned();
	return (*this);
}

std::string Form::getName() const {
	return (this->_name);
}

bool		Form::getSigned() const {
	return (this->_signed);
}
int			Form::getSignGrade() const {
	return (this->_signGrade);
}

int			Form::getExecuteGrade() const {
	return (this->_executeGrade);
}

void		Form::beSigned(const Bureaucrat &cpy) {
	if (cpy.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low.");
}

std::ostream & operator<<(std::ostream & o,const Form &cpy) {
	o << "Name: " << cpy.getName() << std::endl;
	o << "Signed: " << cpy.getSigned() << std::endl;
	o << "Required signed grade: " << cpy.getSignGrade() << std::endl;
	o << "Required executed grade: " << cpy.getExecuteGrade() << std::endl;
	return (o);
}