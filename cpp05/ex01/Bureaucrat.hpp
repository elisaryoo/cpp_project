/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:00:41 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 22:56:33 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &cpy);

		
		std::string		getName() const;
		unsigned int	getGrade() const;
		void			increment();
		void			decrement();
		void			signForm(Form &cpy);
		
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream & o,const Bureaucrat &cpy);

#endif