/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:12 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 03:17:40 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void) {
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "- Standard Given test -" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl;
	std::cout << "- Wrong Animal test -" << std::endl;
	const WrongAnimal *t1 = new WrongAnimal();
	const WrongAnimal *t2 = new WrongCat();
	std::cout << std::endl;
	std::cout << t1->getType() << " " << std::endl;
	t1->makeSound();
	t2->makeSound();
	std::cout << std::endl;
	
	delete t1;
	delete t2;

	return (0);
}