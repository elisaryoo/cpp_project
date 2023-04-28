/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:01:11 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 22:57:15 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form &cpy);
		~Form();
		
		Form & operator= (const Form &cpy);

		std::string getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecuteGrade()const;

		void	beSigned(const Bureaucrat &cpy);
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		
	private:
		std::string _name;
		bool _signed;
		const unsigned int _signGrade;
		const unsigned int _executeGrade;
};

std::ostream & operator<<(std::ostream & out,const Form &cpy);

#endif