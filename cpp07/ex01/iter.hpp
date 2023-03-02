/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:55:03 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/01 02:32:17 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>

template <typename T>
void	iter(T * array, unsigned int length, void (*f) (T &)){
	for (unsigned int i = 0; i < length ; i++)
		f( array[i] );
}

template <typename T>
void	printMe(T & str) { str.append(" Joy!"); };

template <typename T>
void	addOne(T & nbr) {nbr++;};

#endif