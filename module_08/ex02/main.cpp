/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:53:08 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/11 16:39:56 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	{
		std::cout << "-- Test pdf --" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Most recent number added is: " << mstack.top() << std::endl;
		std::cout << std::endl;

		mstack.pop();

		std::cout << "mstack stack size: "<< mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(11);
		mstack.push(12);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
		std::cout << "New s stack size: "<< mstack.size() << std::endl;

		std::cout << std::endl;
		std::cout << "-- Test copy mutant stack --" << std::endl;
		MutantStack<int> cpyMstack = mstack;
		cpyMstack.push(999);
		
		MutantStack<int>::iterator cpyIt = cpyMstack.begin();
		MutantStack<int>::iterator cpyIte = cpyMstack.end();

		mstack.push(1000);

		std::cout << "Printing mutant copy: " << std::endl;
		while (cpyIt != cpyIte)
		{
			std::cout << *cpyIt << std::endl;
			cpyIt++;
		}
		std::cout << std::endl;
		std::cout << "Printing original mutant with a new number added: " << std::endl;
		it = mstack.begin();
		ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}

	}
	return (0);
}