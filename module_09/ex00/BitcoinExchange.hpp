/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:24 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/26 15:39:58 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <exception>
#include <algorithm>
#include <map>

#define CSVFILE "data.csv"

class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);
		BitcoinExchange(std::string input);
		~BitcoinExchange();

		BitcoinExchange & operator=(const BitcoinExchange &cpy);

		void transferToMap(std::string data);
		void checkValidInputs();
		bool verifyDate(std::string date);
		bool verifyValue(float value, std::string temp, std::string line);
		bool verifyNumberRange(float value);
		bool checkLeapYear(int year);
		void executeBtcConvert(std::string date, float value);

		class InvalidFileException : public std::exception {
			public:
				virtual const char*  what() const throw();
		};
		
		class InvalidInputException : public std::exception {
			public:
				virtual const char*  what() const throw();
		};

	private:
		std::string _input;
		std::map<std::string , float> _map;
};

#endif