/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:24:13 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/27 01:22:20 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	newFileTransfer(std::string newBuffer, std::string file)
{
	std::string newFileName = file.append(".replace");
	std::ofstream newFile(newFileName.c_str());

	newFile << newBuffer;
	newFile.close();
}

void	substituteOldFile(std::string oldBuffer, std::string str1, std::string str2, std::string file)
{
	size_t index;
	std::string newBuffer;

	while(oldBuffer.find(str1) != std::string::npos)
	{
		index = oldBuffer.find(str1);
		newBuffer.append(oldBuffer.substr(0,index));
		newBuffer.append(str2);
		oldBuffer = oldBuffer.substr(index + str1.size(), oldBuffer.size());
	}
	newBuffer.append(oldBuffer);
	newFileTransfer(newBuffer, file);
}

void	checkGivenFile(std::string file, std::string str1, std::string str2)
{
	std::ifstream oldFile(file.c_str());
	std::stringstream temp;
	std::string oldBuffer;

	if (!oldFile.is_open())
	{
		std::cout << "There's no such file!" << std::endl;
		return ;
	}
	temp << oldFile.rdbuf();
	oldBuffer = temp.str();
	oldFile.close();
	substituteOldFile(oldBuffer, str1, str2, file);
}

int main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "Incorrect params! Please input ./main <file> <s1> <s2>" << std::endl;
		return (1);
	}
	checkGivenFile(argv[1], argv[2], argv[3]);
	return (0);
}
