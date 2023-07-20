/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:25:02 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 12:41:47 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain &cpy);
		~Brain();

		Brain & operator=(const Brain &cpy);

		std::string	getIdeas(int index);
		void		setIdeas(int index, std::string idea);
	protected:
		std::string _ideas[100];
};

#endif