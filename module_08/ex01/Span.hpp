/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:53:06 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/11 15:30:45 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();

		Span & operator=(const Span &cpy);
		
		void getSize();
		void addNumber(int nbr);
		void addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
		
		class FullyStored : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class NotFound : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	private:
		unsigned int _N;
		std::vector<int> _storage;
};

#endif