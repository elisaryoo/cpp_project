/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:42:00 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 13:12:03 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string input)
{
	this->_input = input;
}

Convert::Convert(const Convert &cpy){
	*this = cpy;
}

Convert::~Convert() {}

Convert & Convert::operator=(const Convert &cpy) {
	this->_input = cpy.getInput();
	return (*this);
}

std::string	Convert::getInput() const {
	return (this->_input);
}

void	Convert::toChar() {
	if (this->_input.length() == 1 && isalpha(this->_input[0])){
		std::cout << "char: \'" << this->_input << "\'" << std::endl;
		return ;
	} else if (this->_input.length() > 1 && isalpha(this->_input[1]))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char c = static_cast<char> (std::atoi(this->_input.c_str()));
	if (isprint(c))
		std::cout << "char: \'" << c << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	Convert::toInt() {
	if (this->_input.length() == 1 && isalpha(this->_input[0])){
		std::cout << "int: " << static_cast<int>(this->_input[0]) << std::endl;
		return ;
	}
	long int nbr = atol(this->_input.c_str());
	if ((nbr >= INT_MIN && nbr <= INT_MAX && nbr != 0) 
	|| (this->_input.length() == 1 && this->_input[0] == '0' && nbr == 0))
		std::cout << "int : " << nbr << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
}

void	Convert::toFloat() {
	if (this->_input.length() == 1 && isalpha(this->_input[0])) {
		std::cout << "float: \'" << static_cast<float>(this->_input[0]) << ".0f" << std::endl;
		return ;
	} 
	double nbr = atof(this->_input.c_str());
	if (nbr == 0 && this->_input.length() != 1 && this->_input[0] != '0') {
		std::cout << "float : nanf" << std::endl;
		return ;
	}
	if (this->_input[0] == '-' &&  nbr == std::numeric_limits<float>::infinity()) {
		if (nbr < 0)
			std::cout << "float: -inff" << std::endl;
		else
			std::cout << "float: +inff" << std::endl;
	} else if ((double)(nbr - (int)nbr) == 0){
		std::cout << "float: " << nbr << ".0f" << std::endl;
	} else {
		std::cout << "float: " << nbr << "f" << std::endl;
	}
}

void	Convert::toDouble() {
	if (this->_input.length() == 1 && isalpha(this->_input[0])) {
		std::cout << "double: \'" << static_cast<double>(this->_input[0]) << ".0" << std::endl;
		return ;
	}
	double nbr = atof(this->_input.c_str());
	if (nbr == 0 && this->_input.length() != 1 && this->_input[0] != '0') {
		std::cout << "double : nan" << std::endl;
		return ;
	}
	if (this->_input[0] == '-' && nbr == std::numeric_limits<double>::infinity()) {
		if (nbr < 0)
			std::cout << "double: -inf" << std::endl;
		else
			std::cout << "double: +inf" << std::endl;
	} else if ((double)(nbr - (int)nbr) == 0){
		std::cout << "double: " << nbr << ".0" << std::endl;
	} else {
		std::cout << "double: " << nbr << std::endl;
	}
}