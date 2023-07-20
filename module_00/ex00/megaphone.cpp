/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:31:59 by eryoo             #+#    #+#             */
/*   Updated: 2023/03/22 19:39:15 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char** argv) {
	char	c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for(int j = 0; argv[i][j]; j++)
			{
				c = toupper((int)argv[i][j]);
				std::cout << c;
			}
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}