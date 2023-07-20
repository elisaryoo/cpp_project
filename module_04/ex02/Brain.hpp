/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:25:02 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:52:06 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

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