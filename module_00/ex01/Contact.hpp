/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:55:12 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/22 19:32:22 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		bool	findNonChar(std::string name);
		bool	findNonDigit(std::string phone);
		void	printAllContacts(int index);

		std::string	truncateInfo(std::string info);
		void	printContact(int index);

		void	setFirstName();
		void	setLastName();
		void	setNickName();
		void	setPhoneNumber();
		void	setDarkSecret();
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkSecret;
};

#endif