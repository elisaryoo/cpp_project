/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:38:03 by eryoo             #+#    #+#             */
/*   Updated: 2023/02/23 08:44:41 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public: 
		virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif