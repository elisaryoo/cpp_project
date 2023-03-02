/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:27:30 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/23 08:09:34 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _faveNbr(11), _greeting("Greetings!") {}

Data::Data(int nbr, std::string str) : _faveNbr(nbr), _greeting(str) {}

Data::Data(const Data & cpy) {
	*this = cpy;
}

Data::~Data() {}

Data & Data::operator=(const Data & cpy) {
	this->_faveNbr = cpy._faveNbr;
	this->_greeting = cpy._greeting;
	return (*this);
}

int	Data::getFaveNumber() const {
	return (this->_faveNbr);
}

std::string Data::getGretting() const {
	return (this->_greeting);
}

uintptr_t Data::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

