/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:12:39 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/22 19:32:54 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook		phonebook;
	std::string		info;

	while (true){
		std::cout << ">> ";
		getline(std::cin, info);
		if (info.compare("ADD") == 0)
			phonebook.setNewContact();
		else if (info.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (info.compare("EXIT") == 0)
			break;
		else
			std::cout << "Please do input the right commands: ADD, SEARCH OR EXIT" << std::endl;
	}
	return (0);
}
