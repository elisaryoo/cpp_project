/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:53:02 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/11 15:33:07 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	{
		std::cout << "-- Pdf test --" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "-- Pdf test with 10000 --" << std::endl;
		Span sp = Span(10000);

		for (int i = 0; i < 10000; i++) {
			sp.addNumber(i * 2);
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "-- Range test --" << std::endl;

		Span sp = Span(100);
		std::vector<int> test(50,0);

		std::cout << "✅ Range will work!" << std::endl;
		try {
			sp.addRangeNumber(test.begin(), test.end());
			sp.getSize();
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "✅ Range will work!" << std::endl;
		try {
			sp.addRangeNumber(test.begin(), test.end());
			sp.getSize();
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "❌ Range will not work!" << std::endl;
		try {
			sp.addRangeNumber(test.begin(), test.end());
			sp.getSize();
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		
	}
	return 0;
}