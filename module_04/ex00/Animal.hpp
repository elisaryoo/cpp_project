/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:03 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 03:10:23 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal & cpy);
		virtual ~Animal();

		Animal & operator=(const Animal & cpy);

		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string _type;
};

#endif