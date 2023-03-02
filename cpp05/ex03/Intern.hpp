/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:51:28 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:45:51 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <exception>
#include <string>

class Intern {
	public:
		Intern();
		Intern(Intern const &cpy);
		~Intern();
		Intern & operator=(Intern const &cpy);

		AForm* makeForm(const std::string name, const std::string target);

		AForm* invalidForm(const std::string target) const;
		AForm* presidentialPardonForm(const std::string target) const;
		AForm* robotomyRequestForm(const std::string target) const;
		AForm* shruberryCreationForm(const std::string target) const;

		class NoFormMatch : public std::exception {
		public:
			const char* what() const throw();
	};
};

#endif