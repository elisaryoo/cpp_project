/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:03 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:49:59 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal & cpy);
		virtual ~AAnimal();

		AAnimal & operator=(const AAnimal & cpy);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
		std::string _type;
};

#endif