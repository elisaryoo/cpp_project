/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:54:04 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 21:43:31 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T & x, T & y){
	T temp = x;
	x = y;
	y = temp;
	return ;
}

template<typename T>
T max(T const & x, T const & y){
	return ((x > y) ? x : y);
}

template <typename T>
T min (T const & x, T const & y){
	return ((x < y) ? x : y);
}

#endif