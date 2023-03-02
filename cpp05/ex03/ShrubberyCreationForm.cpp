/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:43:16 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:56:46 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm() : 
AForm("ShruberryForm", 145, 137), _target("Dummy") {}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : 
AForm("ShruberryForm", 145, 137), _target(target) {}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const &cpy) : 
AForm("ShruberryForm", 145, 137) {
	*this = cpy;
}

ShruberryCreationForm::~ShruberryCreationForm() {}

ShruberryCreationForm & ShruberryCreationForm::operator=(ShruberryCreationForm const &cpy) {
	this->_target = cpy._target;
	return (*this);
}

void	ShruberryCreationForm::execute(Bureaucrat const &cpy) const {
	if (cpy.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	else {
		std::string fileName = this->_target + "_shruberry";
		std::ofstream ofs(fileName.c_str());
		ofs <<"           @\n"
			<<"		@ @ @  @ @ @\n"
			<<"		@  @\\/@ @ /__@\n"
			<<"	   @@@ @\\ / @/  @ @\n"
			<<"	    @\\  \\/@| @  | @\n"
			<<"	   @__\\@ \\ |/ \\| / @\n"
			<<"	_   _\\|@|  ||/__/@\n"
			<<"	   	/  \\ \\  / /__\n"
			<<"    @    \\  \\/ /   @\n"
			<<"          |   |\n"
			<<"			 |   |\n"
			<<"			 |   |\n"
			<<"		    ~|   |~\n"
			<<"		 ~~~~     ~~~~\n"
			<<"	   ~~~           ~~~\n";
		ofs.close();
	}
	return ;
}