/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:36:12 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 13:56:27 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main (void) {
	// if you uncomment the line below it won't compile :)
	// AAnimal *fail = new AAnimal();
	
	std::cout << "<< Testing default constructor >>"<<std::endl;
	
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	
	dog->setIdeas(0, "Hello, my name is Doug!");
	cat->setIdeas(0, "Hello, my name is Luna!");
	std::cout << std::endl;
	std::cout << dog->getIdeas(0) << std::endl;
	std::cout << cat->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << "<< Testing copy constructor >>" << std::endl;
	Dog *cpyDog = new Dog(*dog);
	Cat *cpyCat = new Cat(*cat);

	std::cout << std::endl;
	std::cout << cpyDog->getIdeas(0) << std::endl;
	std::cout << cpyCat->getIdeas(0) << std::endl;
	cpyDog->setIdeas(0, "Hello, my name is clone Doug!");
	cpyCat->setIdeas(0, "Hello, my name is clone Luna!");
	std::cout << std::endl;
	std::cout << cpyDog->getIdeas(0) << std::endl;
	std::cout << cpyCat->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << "<< Testing filling in all ideas >>" << std::endl;
	for (int i = 0; i < 100; i++)
		cat->setIdeas(i,"I am from the cat village!");
	std::cout << "Getting index 10: "<<cat->getIdeas(10) << std::endl;
	std::cout << "Getting index 99: "<<cat->getIdeas(99) << std::endl;
	std::cout << std::endl;

	delete dog;
	delete cat;
	
	return (0);
}