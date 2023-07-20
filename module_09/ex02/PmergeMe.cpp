/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:50:40 by eryoo             #+#    #+#             */
/*   Updated: 2023/05/26 17:54:25 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cpy) {
	*this = cpy;
}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe &cpy) {
	this->_list = cpy._list;
	this->_deque = cpy._deque;
	return (*this);
}

void PmergeMe::transferToLists(char *argv[]) {
	for (int i = 1; argv[i]; i++)
	{
		for (size_t j = 0; argv[i][j]; j++)
		{
			if (!std::isdigit(argv[i][j]))
				throw PmergeMe::InvalidArgs();
		}
		this->_list.push_back(std::atoi(argv[i]));
		this->_deque.push_back(std::atoi(argv[i]));
	}
	beginSort(argv);
}

template<typename T, typename P>
void PmergeMe::separateIntoPairs( T &list, P &listPair) {
	int size = list.size();
	while (!list.empty())
	{
		int nbrA = list.front();
		list.pop_front();
		int nbrB = list.front();
		list.pop_front();
		listPair.push_back(std::make_pair(nbrA, nbrB));
		if (list.size() == 1 && size % 2 != 0)
		{
			nbrA = list.front();
			list.pop_front();
			listPair.push_back(std::make_pair(nbrA, -1));
		}
	}
}

template<typename T, typename P>
void PmergeMe::sortPairs( T &list, P &listPair, T &smallList)
{
	for (typename P::iterator it = listPair.begin(); it != listPair.end(); it++)
	{
		if (it->second != -1 && it->first > it->second)
			std::swap(it->first, it->second);
		if (it->second != -1)
			list.push_back(it->second);
		smallList.push_back(it->first);
	}
}

template<typename T>
void PmergeMe::sortMainList( T &list)
{
	typename T::iterator i = list.begin();
	typename T::iterator j = i;

	while( i != list.end())
	{
		i++;
		for (j = i; j != list.end(); j++)
		{
			typename T::iterator k = i;
			k--;
			if (*k > *j)
				std::swap(*j, *k);
		}
	}
}

template<typename T>
void PmergeMe::combineLists( T &smallList, T &list)
{
	for (typename T::iterator it = smallList.begin(); it != smallList.end(); ++it)
	{
		typename T::iterator pos = std::lower_bound(list.begin(), list.end(), *it );
		list.insert(pos, *it);
	}	
}

template<typename T, typename P>
void PmergeMe::sortList( T &list, P &listPair)
{
	T smallList;

	if (list.size() > 1) {
		separateIntoPairs(list, listPair);
		sortPairs(list, listPair, smallList);
	}
	sortMainList(list);
	combineLists(smallList, list);
}

void PmergeMe::beginSort(char *argv[]) 
{
	clock_t start, end;
	double timeList, timeDeque;

	start = clock();
	std::list<std::pair<int, int> > listPair;
	sortList(this->_list, listPair);
	end = clock();
	timeList = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;

	start = clock();
	std::deque<std::pair<int, int> > dequePair;
	sortList(this->_deque, dequePair);
	end = clock();
	timeDeque = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;

	printComparison(argv, timeList, timeDeque);
	
}

void PmergeMe::printComparison(char *argv[], double timeList, double timeDeque)
{
	// printing list sort
	std::cout << "Before: " << std::endl;
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
	
	std::cout << "After: ";
	for (std::list<int>::iterator it = this->_list.begin(); it != _list.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << this->_list.size() 
	<< " elements with std::list:  " << timeList << " us" << std::endl;
	std::cout << std::endl;

	// printing deque sort
	std::cout << "Before: " << std::endl;
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	std::cout << "After: ";
	for (std::deque<int>::iterator it = this->_deque.begin(); it != _deque.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << this->_deque.size() 
	<< " elements with std::deque:  " << timeDeque << " us" << std::endl;
	std::cout << std::endl;
}

const char* PmergeMe::InvalidArgs::what() const throw() {
	return ("Error: Invalid arguments");
}