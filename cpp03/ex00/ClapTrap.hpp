/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:56:39 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/19 13:49:22 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std:: string name);
		ClapTrap(ClapTrap const &cpy);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const &cpy);
		
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};

# endif