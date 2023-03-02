/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:17:34 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/09 01:02:53 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to the special Phonebook, please input: ADD, SEARCH or EXIT :)" << std::endl;
	this->index = 0;
	this->all = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "See ya!~ :D" << std::endl;
}

void	PhoneBook::setNewContact()
{
	int temp;

	temp = this->index;
	if (this->index == 7)
		this->index = 0;
	else
		this->index += 1;
	this->_contacts[temp].setFirstName();
	this->_contacts[temp].setLastName();
	this->_contacts[temp].setNickName();
	this->_contacts[temp].setPhoneNumber();
	this->_contacts[temp].setDarkSecret();
	if (this->all < 8)
		this->all++;
	std::cout << "New contact registered!" << std::endl;
}

void	PhoneBook::searchContact()
{
	std::string	index;
	Contact contact;

	if (this->index == 0)
	{
		std::cout << "There are no contacts registered." << std::endl;
		return ;
	}
	std::cout << "All contacts:" << std::endl;
	std::cout << "|" << std::right << 
	std::setw(10) << "index" << "|" <<
	std::setw(10) << "FirstName" << "|" <<
	std::setw(10) << "LastName" << "|" <<
	std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; this->all > i; i++)
		this->_contacts[i].printAllContacts(i);
	while (true)
	{
		std::cout << "index: ";
		getline(std::cin, index);
		if (index.length() > 0)
			break ;
	}
	std::cout << "bye" << std::endl;
}

//fix the search issue
