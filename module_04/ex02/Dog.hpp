/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:10 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:51:40 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	public:
		Dog();
		Dog(const Dog & cpy);
		~Dog();

		Dog & operator=(const Dog & cpy);
		
		void	makeSound() const;
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);
	private:
		Brain *_brain;
};

#endif