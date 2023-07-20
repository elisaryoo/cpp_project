/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:33 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/25 17:06:40 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn() {}

Rpn::Rpn(std::string input) : _input(input) {}

Rpn::Rpn(const Rpn &cpy) {
	*this = cpy;
}

Rpn & Rpn::operator=(const Rpn &cpy) {
	this->_input = cpy._input;
	this->_stack = cpy._stack;
	return (*this);
}

Rpn::~Rpn() {}

void	Rpn::checkOperations(int i) {
	std::string temp;
	int x = 0;
	int y = 0;

	x = this->_stack.top();
	this->_stack.pop();
	y = this->_stack.top();
	this->_stack.pop();
	switch (this->_input[i])
	{
		case '+':
			this->_stack.push(y + x);
			break;
		case '-':
			this->_stack.push(y - x);
			break;
		case '*':
			this->_stack.push(y * x);
			break;
		case '/':
			if (x == 0)
				throw Rpn::UndivisibleZero();
			this->_stack.push(y / x);
			break;
		default:
			throw Rpn::InvalidArgs();
	}
}

void	Rpn::splitInput() {
	std::string temp;
	int value;
	
	if (this->_input.length() < 3)
		throw Rpn::InvalidArgs();
	for (long unsigned int i = 0; i < this->_input.length(); i++)
	{
		if (std::isdigit(this->_input[i]))
		{
			if (this->_input[i + 1] == ' ' && (i + 1) < this->_input.length())
			{
				temp = this->_input[i];
				value = std::atoi(temp.c_str());
				this->_stack.push(value);
			} else 
				throw Rpn::InvalidArgs();
		} else {
			if (this->_input[i] != ' ')
			{
				if (std::isdigit(this->_input[i + 1]))
					throw Rpn::InvalidArgs();
				if (this->_stack.size() > 1)
					checkOperations(i);
				else 
					throw Rpn::InvalidArgs();
			} 
		}
	}
	if (this->_stack.size() == 1)
		std::cout << this->_stack.top() << std::endl;
	else 
		throw Rpn::InvalidArgs();
	return;
}

const char* Rpn::InvalidArgs::what() const throw() {
	return ("Error: Invalid arguments");
}

const char* Rpn::UndivisibleZero::what() const throw() {
	return ("Error: Division can't be done by zero");
}