/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:43:22 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/21 23:00:30 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM_HPP
# define SHRUBERRY_CREATION_FORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShruberryCreationForm : public AForm {
	public:
		ShruberryCreationForm();
		ShruberryCreationForm(std::string target);
		ShruberryCreationForm(ShruberryCreationForm const &cpy);
		~ShruberryCreationForm();
		ShruberryCreationForm & operator=(ShruberryCreationForm const &cpy);

		void	execute(Bureaucrat const &cpy) const;
		
	private:
		std::string	_target;
};

#endif