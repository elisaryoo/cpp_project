/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:26 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/20 21:15:39 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	try {
		BitcoinExchange btc = BitcoinExchange(argv[1]);
		btc.checkValidInputs();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}