/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:53:00 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/11 11:07:13 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <vector>
#include <list>

int main(void) {
	{
		std::cout << "-- Testing with vector --" << std::endl;
		std::vector<int> vec;

		vec.push_back(11);
		vec.push_back(12);
		vec.push_back(13);

		try {
			std::cout << "Test A: " << *easyFind(vec, 11) << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Test B: " << *easyFind(vec, 20) << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "-- Testing with list --" << std::endl;
		std::list<int> lst;

		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);
		lst.push_back(5);

		try {
			std::cout << "Test C: " << *easyFind(lst, 1) << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "Test D: " << *easyFind(lst, 10) << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}