/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 10:41:02 by tclaudel          #+#    #+#             */
/*   Updated: 2020/04/08 11:00:21 by tclaudel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <list>

#include "MutantStack.hpp"

int main()
{

	std::cout << "Mutated abomination outputs:" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::stack_iterator it = mstack.begin();
	MutantStack<int>::stack_iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << "Checking output with std::list outputs:" << std::endl;
	std::list<int>	lmstack;

	lmstack.push_front(5);
	lmstack.push_front(17);
	std::cout << lmstack.front() << std::endl;
	lmstack.pop_front();
	std::cout << lmstack.size() << std::endl;
	lmstack.push_front(3);
	lmstack.push_front(5);
	lmstack.push_front(737);
	//[...]
	lmstack.push_front(0);

	MutantStack<int>::stack_iterator lit = lmstack.begin();
	MutantStack<int>::stack_iterator lite = lmstack.end();
	++lit;
	--lit;

	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::stack<int> ls(mstack);

	return 0;
}