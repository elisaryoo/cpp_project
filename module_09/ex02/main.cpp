/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:37 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/26 04:10:50 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) 
{
	if (argc > 1)
	{
		try {
			PmergeMe teste = PmergeMe();
			teste.transferToLists(argv);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	} else
		std::cout << "Error: No given numbers to sort!" << std::endl;
	return (0);
}