/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:53:04 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/11 17:03:08 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) {
	this->_N = N;
}

Span::Span(const Span &cpy) {
	*this = cpy;
}

Span::~Span() {}

Span & Span::operator=(const Span &cpy) {
	this->_N = cpy._N;
	this->_storage = cpy._storage;
	return (*this);
}

const char* Span::FullyStored::what() const throw() {
	return ("Out of storage!");
}

const char* Span::NotFound::what() const throw() {
	return ("Not enough numbers!");
}

void Span::getSize() {
	std::cout << this->_storage.size() << std::endl;
}

void Span::addNumber(int nbr) {
	if (this->_storage.size() >= this->_N)
		throw Span::FullyStored();
	this->_storage.push_back(nbr);
}

void Span::addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if(this->_N < std::distance(begin, end) + this->_storage.size())
		throw Span::FullyStored();
	for (; begin != end; begin++)
		this->_storage.push_back(*begin);
}

int Span::shortestSpan() {
	int shortSpan;
	std::vector<int>::iterator it;

	if (this->_storage.size() < 2)
		throw Span::NotFound();

	std::sort(this->_storage.begin(), this->_storage.end());
	it = this->_storage.begin();
	
	shortSpan = std::abs(*it - *(it + 1));
	for (; it != this->_storage.end(); it++)
	{
		if (it + 1 != this->_storage.end())
		{
			if (std::abs(*it - *(it + 1)) < shortSpan)
				shortSpan = std::abs(*it - *(it + 1));
		}
	}
	return (shortSpan);
}

int Span::longestSpan() {
	if (this->_storage.size() < 2)
		throw Span::NotFound();
	
	std::vector<int>::iterator min = std::min_element(this->_storage.begin(), this->_storage.end());
	std::vector<int>::iterator max = std::max_element(this->_storage.begin(), this->_storage.end());

	return (*max - *min);
}