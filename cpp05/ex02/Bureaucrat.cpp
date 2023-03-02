/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:00:43 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:55:40 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	std::cout << "Bureaucrat name/grade constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = cpy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &cpy) {
	std::cout << "Bureaucrat copy assigment operator called" << std::endl;
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
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrement() {
	if (this->_grade == 150)
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

std::ostream & operator<<(std::ostream & o,const Bureaucrat &cpy) {
	o << cpy.getName() << ", bureaucrat grade " << cpy.getGrade() << std::endl;
	return (o);
}

void			Bureaucrat::signForm(AForm &cpy) {
	try {
		cpy.beSigned(*this);
		std::cout << this->_name << " signed " << cpy.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << this->_name << " coundn't sign " << cpy.getName() << " because " << e.what() << std::endl;
	}
}

void			Bureaucrat::executeForm(AForm const &cpy) {
	try {
		cpy.execute(*this);
		std::cout << this->_name << " executed " << cpy.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << cpy.getName() << " can't be executed due to " << e.what()	<< std::endl;
	}
}