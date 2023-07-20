/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:30 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/25 14:40:46 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cout << "Error: not enough arguments!" << std::endl;
		return (1);
	}
	try {
		Rpn teste(argv[1]);
		teste.splitInput();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}