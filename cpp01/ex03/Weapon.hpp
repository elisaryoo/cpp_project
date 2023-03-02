/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 02:37:07 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/09 02:46:37 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string& getType(void);
		void setType(std::string type);
		
	private:
		std::string _type;
};

#endif