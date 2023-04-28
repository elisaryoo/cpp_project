/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:55:03 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 22:06:30 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void	iter(T * array, unsigned int length, void (*f) (const T &)){
	for (unsigned int i = 0; i < length ; i++)
		f( array[i] );
}

template <typename T>
void	printMe(const T & str) {
	std::cout << str << std::endl;
};

#endif