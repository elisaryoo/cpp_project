/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:27:30 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 09:22:06 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _greeting("Greetings!") {}

Data::Data(std::string str) : _greeting(str) {}

Data::Data(const Data & cpy) {
	*this = cpy;
}

Data::~Data() {}

Data & Data::operator=(const Data & cpy) {
	this->_greeting = cpy._greeting;
	return (*this);
}

std::string Data::getGretting() const {
	return (this->_greeting);
}

uintptr_t Data::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Data::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

