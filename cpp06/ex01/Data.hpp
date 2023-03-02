/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:27:34 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/22 23:43:56 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data {
	public:
		Data();
		Data(int nbr, std::string str);
		Data(const Data &cpy);
		~Data();

		Data & operator=(const Data & cpy);
		
		int			getFaveNumber() const;
		std::string	getGretting() const;

		static uintptr_t serialize(Data *ptr);
		static Data*	deserialize(uintptr_t raw);
	private:
		int			_faveNbr;
		std::string _greeting;
};

#endif