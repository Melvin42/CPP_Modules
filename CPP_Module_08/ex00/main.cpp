/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:03:10 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 11:57:10 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main() {
	try {
		std::vector<int>					tab(4, 10);
		std::vector<int>::const_iterator	iter;

		iter = ::easyfind(tab, 10);
		std::cout << *iter << std::endl;
		iter = ::easyfind(tab, 1);
		std::cout << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::list<int>						lst;
		std::list<int>::const_iterator		iter;

		lst.push_back(10);
		lst.push_back(11);
		lst.push_back(12);
		lst.push_back(12);
		lst.push_back(42);
		lst.push_back(15);
		iter = ::easyfind(lst, 42);
		std::cout << *iter << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
