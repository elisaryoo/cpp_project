/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:01:11 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:01:21 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm &cpy);
		virtual ~AForm();
		
		AForm & operator= (const AForm &cpy);

		std::string getName() const;
		bool		getSigned() const;
		unsigned int			getSignGrade() const;
		unsigned int			getExecuteGrade()const;

		void	beSigned(const Bureaucrat &cpy);
		bool	isItSigned() const;
		
		virtual void	execute(Bureaucrat const & cpy) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class UnsignedFormException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		
	private:
		std::string _name;
		bool _signed;
		const unsigned int _signGrade;
		const unsigned int _executeGrade;
};

std::ostream & operator<<(std::ostream & o,const AForm &cpy);

#endif