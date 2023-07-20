/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:42 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/26 05:51:45 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <algorithm>
#include <utility>
#include <exception>

#include <list>
#include <deque>
#include <time.h>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		~PmergeMe();

		PmergeMe & operator=(const PmergeMe &cpy);

		void transferToLists(char *argv[]);
		void beginSort(char *argv[]);
		void printComparison(char *argv[], double timeList, double timeDeque);

		template<typename T, typename P>
		void sortList( T &list, P &listPair);

		template<typename T, typename P>
		void separateIntoPairs( T &list, P &listPair);

		template<typename T, typename P>
		void sortPairs( T &list, P &listPair, T &smallList);

		template<typename T>
		void sortMainList( T &list);

		template<typename T>
		void combineLists( T &smallList, T &list);

		class InvalidArgs : public std::exception {
			public:
				virtual const char*  what() const throw();
		};
	private:
		std::list<int> _list;
		std::deque<int> _deque;
};

#endif