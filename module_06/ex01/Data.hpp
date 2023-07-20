/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:27:34 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 09:21:46 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data {
	public:
		Data();
		Data(std::string str);
		Data(const Data &cpy);
		~Data();

		Data & operator=(const Data & cpy);

		std::string	getGretting() const;

		uintptr_t serialize(Data *ptr);
		Data*	deserialize(uintptr_t raw);
	private:
		std::string _greeting;
};

#endif