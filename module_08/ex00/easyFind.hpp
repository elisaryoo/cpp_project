/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:52:56 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/08 12:36:01 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFound : public std::exception {
	virtual const char * what() const throw() {
		return ("Number not found!");
	};
};

template <typename T>
typename T::iterator easyFind(T & container, int nbr) {
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), nbr);
	if (it == container.end())
		throw NotFound();
	return (it);
}

#endif