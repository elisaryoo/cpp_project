/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:00:43 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 19:59:30 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(150) {
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	std::cout << "name/grade constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &cpy) {
	std::cout << "copy assigment operator called" << std::endl;
	this->_grade = cpy._grade;
	return (*this);
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

unsigned int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::increment() {
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrement() {
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low.");
}

std::ostream & operator<<(std::ostream & out,const Bureaucrat &cpy) {
	out << cpy.getName() << ", bureaucrat grade " << cpy.getGrade() << std::endl;
	return (out);
}