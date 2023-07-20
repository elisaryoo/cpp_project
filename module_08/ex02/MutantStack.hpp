/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 02:53:10 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/09 11:00:36 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template < typename T, typename container = std::deque<T> >
class MutantStack : public std::stack< T, container > {
	public:
	MutantStack() : std::stack < T,container >() {};
	MutantStack( MutantStack const & cpy) : std::stack <T, container>(cpy) {};
	~MutantStack() {};
	
	MutantStack & operator=( const MutantStack & cpy) {
		std::stack <T, container>::operator=(cpy);
		return (*this);
	}

	typedef typename container::iterator iterator;

	typename container::iterator begin() { return (this->c.begin()); };
	typename container::iterator end() { return (this->c.end()); };
};

#endif