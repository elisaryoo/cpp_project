/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:54:55 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/01 02:46:05 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
	public:
		Array(void) : _array(NULL), _length(0) {};
		Array(unsigned int n) : _array(new T[n]), _length(n) {};
		Array(Array const & cpy) : _array(NULL) { this->operator(cpy)};
		~Array(void) { delete [] this->_array};

		unsigned int size(void) const {return (this->_length);};
		
		Array & operator=(const Array & cpy) {
			delete [] this->_array;
			this->_array = new T[cpy.size()];
			for (unsigned int i = 0; i < cpy.size(); i++)
				this->_array[i] = cpy[i];
			this->_length = cpy.size();
			return (*this);
		};

		T & operator[](unsigned int index) const {
			if (index >= this->_length)
				throw Array::OutOfRange();
			return (this->_array[index]);
		};

		class OutOfRange : public std::exception {
			virtual const char * what() const throw() {
				return ("Array's index is out of range!");
			};
		}

	private: 
		T * _array;
		unsigned int	_length; 
};

#endif