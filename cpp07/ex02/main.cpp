/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 05:54:53 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 23:06:39 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void) {
	{
		Array <int> numbers(10);

		std::cout << "--- Numbers array TEST ---" << std::endl;
		for (unsigned int i = 0; i < numbers.size(); i++)
			numbers[i] = i + 1;
		
		std::cout << "Check array size: " << numbers.size() << std::endl;
		std::cout << std::endl;
		
		std::cout << "Check array size beyond-range:  " << std::endl;
		try {
			numbers[11] = 1000;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Check array [] operator: " << std::endl;
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << std::endl;
	}
	{
		Array <char> letters(20);
		Array <char> dummyLetters(20);

		std::cout << "--- Letters array TEST ---" << std::endl;
		for (unsigned int i = 0; i < letters.size(); i++)
			letters[i] = 'a' + i;
		
		std::cout << "Check array size: " << letters.size() << std::endl;
		std::cout << std::endl;
		
		std::cout << "Check array size beyond-range:  " << std::endl;
		try {
			letters[30] = 'z';
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Check array [] operator: " << std::endl;
		for (unsigned int i = 0; i < letters.size(); i++)
			std::cout << letters[i] << std::endl;
		std::cout << std::endl;
		
		std::cout << "Check copied array and modification: " << std::endl;
		dummyLetters = letters;
		dummyLetters[10] = 'y';
		
		std::cout << "dummyLetters[10] = " << dummyLetters[10] << std::endl;
		std::cout << "letters[10] = " << letters[10] << std::endl;
	}
}