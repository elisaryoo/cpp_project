/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:38:01 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/23 08:59:06 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {
	Base *ptr;

	for (int i = 0; i < 5; i++){
		std::cout << "---- New test ----" << std::endl;
		ptr = generate();
		std::cout << "Base *p: ";
		identify(*ptr);
		std::cout << std::endl;
		std::cout << "Base &p: ";
		identify(ptr);
		std::cout << std::endl;
		delete ptr;
	}
}