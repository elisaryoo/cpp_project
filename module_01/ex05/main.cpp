/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:47:55 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/15 06:56:00 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main() {
	Harl harl;

	std::cout << "🤖 Harl test 🤖" << std::endl;
	std::cout << std::endl;

	std::cout << "📑 INFO" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "🪲  DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "🚨 WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "❌ ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	return (0);
}