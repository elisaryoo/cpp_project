/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:30:46 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/22 23:13:38 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include <climits>
#include <limits>

#include <cstdio>

void	convertChar(std::string str) {
	if (str.length() == 1 && isalpha(str[0])){
		std::cout << "char: \'" << str << "\'" << std::endl;
		return ;
	} else if (str.length() > 1 && isalpha(str[1]))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char c = static_cast<char> (std::atoi(str.c_str()));
	if (isprint(c))
		std::cout << "char: \'" << c << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	convertInt(std::string str) {
	if (str.length() == 1 && isalpha(str[0])){
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		printf("hello");
		return ;
	}
	long int nbr = atol(str.c_str());
	if (nbr > INT_MIN || nbr < INT_MAX)
		std::cout << "int :" << nbr << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
}

void	convertFloat(std::string str) {
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "float: \'" << static_cast<float>(str[0]) << ".0f" << std::endl;
		return ;
	} 
	double nbr = atof(str.c_str());
	if (nbr == 0 && str.length() != 1 && str[0] != '0') {
		std::cout << "float : nanf" << std::endl;
		return ;
	}
	if (nbr == std::numeric_limits<float>::infinity()) {
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

void	convertDouble(std::string str) {
	if (str.length() == 1 && isalpha(str[0])) {
		std::cout << "double: \'" << static_cast<double>(str[0]) << ".0" << std::endl;
		return ;
	}
	double nbr = atof(str.c_str());
	if (nbr == 0 && str.length() != 1 && str[0] != '0') {
		std::cout << "float : nanf" << std::endl;
		return ;
	}
	if (nbr == std::numeric_limits<double>::infinity()) {
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

int main (int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cout << "Please do input a valid paramenter!" << std::endl;
		return (1);
	}
	convertChar(argv[1]);
	convertInt(argv[1]);
	convertFloat(argv[1]);
	convertDouble(argv[1]);
	return (0);
}

