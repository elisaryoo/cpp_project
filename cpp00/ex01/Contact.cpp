/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:55:10 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/05 21:03:17 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

bool	Contact::findNonChar(std::string name)
{
	for(int i = 0; name[i]; i++)
	{
		if (!isalpha(name[i]))
			return true;
	}
	return false;
}

bool	Contact::findNonDigit(std::string phone)
{
	for(int i = 0; phone[i]; i++)
	{
		if (!isdigit(phone[i]))
			return true;
	}
	return false;
}

void	Contact::printAllContacts(int index)
{
	index++;
	std::cout << "|" << std::right << 
	std::setw(10) << index << "|" <<
	std::setw(10) << this->_firstName << "|" <<
	std::setw(10) << this->_lastName << "|" <<
	std::setw(10) << this->_nickname << "|" << std::endl;
}

void	Contact::setFirstName()
{
	std::string	name;

	while (true)
	{
		std::cout << "First Name: ";
		getline(std::cin, name);
		if (name.length() > 3 && findNonChar(name) == false)
			break;
		else
			std::cout << "A valid first name!" << std::endl;
	}
	this->_firstName = name;
	name.clear();
}

void	Contact::setLastName()
{
	std::string	name;

	while (true)
	{
		std::cout << "Last Name: ";
		getline(std::cin, name);
		if (name.length() > 3 && findNonChar(name) == false)
			break;
		else
			std::cout << "A valid last name!" << std::endl;
	}
	this->_lastName = name;
	name.clear();
}

void	Contact::setNickName()
{
	std::string	name;

	while (true)
	{
		std::cout << "Nickname: ";
		getline(std::cin, name);
		if (name.length() > 3)
			break;
		else
			std::cout << "A valid nickname!" << std::endl;
	}
	this->_nickname = name;
	name.clear();
}

void	Contact::setPhoneNumber()
{
	std::string	phone;

	while (true)
	{
		std::cout << "Phonenumber: ";
		getline(std::cin, phone);
		if (phone.length() > 3 && findNonDigit(phone) == false)
			break;
		else
			std::cout << "A valid phonenumber!" << std::endl;
	}
	this->_phoneNumber = phone;
	phone.clear();
}

void	Contact::setDarkSecret()
{
	std::string	secret;

	while (true)
	{
		std::cout << "Secret: ";
		getline(std::cin, secret);
		if (secret.length() > 3 && secret.length() < 2048)
			break;
		else
			std::cout << "A valid nickname!" << std::endl;
	}
	this->_darkSecret = secret;
	secret.clear();
}
