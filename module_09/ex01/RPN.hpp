/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:35 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/25 01:27:43 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <cctype>
#include <exception>

class Rpn {
	public:
		Rpn();
		Rpn(std::string input);
		Rpn(const Rpn &cpy);
		Rpn & operator=(const Rpn &cpy);
		~Rpn();

		void splitInput();
		void checkOperations(int i);

		class InvalidArgs : public std::exception {
			public:
				virtual const char*  what() const throw();
		};
		
		class UndivisibleZero : public std::exception {
			public:
				virtual const char*  what() const throw();
		};
	private:
		std::string _input;
		std::stack<int> _stack;
};

#endif