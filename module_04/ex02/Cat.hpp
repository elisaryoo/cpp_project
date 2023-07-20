/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:06 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:51:00 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	public:
		Cat();
		Cat(const Cat & cpy);
		~Cat();

		Cat & operator=(const Cat & cpy);
		
		void	makeSound() const ;
		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);
	private:
		Brain *_brain;
};

#endif