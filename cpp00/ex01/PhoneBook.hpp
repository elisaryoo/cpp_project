/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:55:17 by eryoo             #+#    #+#             */
/*   Updated: 2023/01/27 00:41:54 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
	public:
	PhoneBook();
	~PhoneBook();

	void	printAllContacts(int index);
	
	void	setNewContact();
	void	searchContact();

	int		all;
	private:
	Contact	_contacts[8];
	int		index;
};

#endif