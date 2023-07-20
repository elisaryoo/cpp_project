/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:21 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/26 15:40:43 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(std::string input) {
	this->_input = input;
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange & cpy) {
	*this = cpy;
};

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & cpy) {
	this->_input = cpy._input;
	return (*this);
};

BitcoinExchange::~BitcoinExchange() {};

void	BitcoinExchange::transferToMap(std::string data)
{
	std::ifstream file;
	std::string line, keyMap, value;
	float valueMap;

	file.open(data.c_str(), std::ifstream::in);
	if (!file.is_open())
		throw BitcoinExchange::InvalidFileException();
	else {
		while(std::getline(file, line))
		{
			std::istringstream iss(line);
			std::getline(iss, keyMap, ',');
			std::getline(iss, value, ',');
			valueMap = std::strtof(value.c_str(), NULL);
			this->_map[keyMap] = valueMap;
		}
		file.close();
	}
}

bool BitcoinExchange::checkLeapYear(int year)
{
	if ((year % 400 == 0 )||( year % 4 == 0 && year % 100 != 0))
		return true;
	else 
		return false;
}

void	BitcoinExchange::executeBtcConvert(std::string date, float value)
{
	std::map<std::string, float>::iterator it;
	double result;

	date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
	it = this->_map.upper_bound(date);
	it--;

	result = value * (*it).second;
	std::cout << date << " => " << value << " = " << result << std::endl; 
}

bool	BitcoinExchange::verifyDate(std::string date)
{
	int year, month, day;

	if (date.find_first_of('-') != 4 || date.find_last_of('-') != 7)
		return false;

	year = std::atoi(std::string(date.substr(0,4)).c_str());
	month = std::atoi(std::string(date.substr(5,7)).c_str());
	day = std::atoi(std::string(date.substr(8, 10)).c_str());

	if (year < 2009 || year > 9999)
		return false;
	if (month < 1 || month > 12)
		return false;
	 if (day < 1 || day > 31)
		return false;

	if (month == 2)
	{
		if (checkLeapYear(year))
			return (day <= 29);
		else
			return (day <= 28);
	}

	if (month == 4 || month == 6 ||
		month == 9 || month == 11)
		return (day <= 30);

	return true;
}

bool BitcoinExchange::verifyNumberRange(float value)
{
	if (value < 0)
	{
		std::cout << "Error: Not a positive number." << std::endl;
		return false;
	} else if (value > 1000)
	{
		std::cout << "Error: Too large a number." << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::verifyValue(float value, std::string temp, std::string line)
{
	for (long unsigned int i = 1; i < temp.length(); i++)
	{
		if (!std::isdigit(temp[i]))
		{
			if (temp[i] != '.' || (temp[i] == '.' && !std::isdigit(temp[i + 1]))
			|| temp.find_first_of('.') != temp.find_last_of('.'))
			{
				std::cout << "Error: Bad input => " + line << std::endl;
				return false;
			}
		}
	}
	if (!verifyNumberRange(value))
		return false;
	return true;
}

void	BitcoinExchange::checkValidInputs() 
{
	std::ifstream file;
	std::string line, date, temp;
	float value;

	file.open(this->_input.c_str(), std::ifstream::in);
	if (!file.is_open())
		throw BitcoinExchange::InvalidFileException();
	else {
		transferToMap(CSVFILE);
		std::getline(file, line);
		if (line == "date | value")
		{
			while(std::getline(file, line))
			{
				if (line.find(" | ") == std::string::npos)
					std::cout << "Error: Bad input => " + line << std::endl;
				else {
					std::istringstream iss(line);
					std::getline(iss, date, '|');
					if (!verifyDate(date))
						std::cout << "Error: Bad input => " + line << std::endl;
					else
					{
						std::getline(iss, temp, '|');
						value = std::strtof(temp.c_str(), NULL);
						if (verifyValue(value, temp, line))
							executeBtcConvert(date, value);
					}
				}
			}
			file.close();
		} else 
			throw BitcoinExchange::InvalidInputException();
	}
}

const char* BitcoinExchange::InvalidFileException::what() const throw() {
	return ("Error: Invalid file");
}

const char* BitcoinExchange::InvalidInputException::what() const throw() {
	return ("Error: Invalid input");
}