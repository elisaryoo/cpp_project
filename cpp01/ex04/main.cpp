/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 03:24:13 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/14 03:43:15 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "error" << std::endl;
		return (1);
	}
	checkGivenFile(argv[1], argv[2], argv[3]);
	return (0);
}

void	checkGivenFile(std::string file, std::string s1, std::string s2)
{
	
}

// input s1 on file then get this s1 inputs and translate all of them to s2
// hi hi hi banana hi -> bye bye bye banana bye 