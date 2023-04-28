/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:42:25 by eryoo             #+#    #+#             */
/*   Updated: 2023/04/27 13:20:08 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include <climits>
#include <limits>

class Convert {
	public:
		Convert();
		Convert(std::string input);
		Convert (const Convert& src);
		~Convert();

		Convert & operator=(const Convert &cpy);

		std::string	getInput() const;

		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
	
	private:
		std::string _input;
};

#endif