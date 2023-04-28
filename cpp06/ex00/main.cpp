/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:30:46 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/26 03:42:18 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main (int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cout << "Please do input a valid paramenter!" << std::endl;
		return (1);
	}
	Convert teste(argv[1]);
	teste.toChar();
	teste.toInt();
	teste.toFloat();
	teste.toDouble();
	return (0);
}
