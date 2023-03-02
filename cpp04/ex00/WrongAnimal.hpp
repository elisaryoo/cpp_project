/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:17 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 02:54:58 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & cpy);
		~WrongAnimal();

		WrongAnimal & operator=(const WrongAnimal & cpy);

		void	makeSound() const ;
		std::string	getType( ) const;
	protected:
		std::string _type;
};

#endif