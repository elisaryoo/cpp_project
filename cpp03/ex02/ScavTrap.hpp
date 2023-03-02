/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:42:35 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/20 00:43:50 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &cpy);
		ScavTrap(const std::string &cpy);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap &cpy);

		void	guardGate();
		void	attack(const std::string &target);
};

#endif