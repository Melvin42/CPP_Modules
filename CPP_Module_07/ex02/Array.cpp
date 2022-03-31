/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:29:06 by melperri          #+#    #+#             */
/*   Updated: 2022/03/31 20:52:22 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array() {
	std::cout << "Default constructor called" << std::endl;

	_tab = new (0);
	return ;
}

/*
Array::Array(const Array &array) {
	std::cout << GREEN_IT << "Copy constructor called" << END_COLOR << std::endl;
	*this = array;
	return ;
}
*/

Array::~Array() {
	std::cout << "Destructor called" << std::endl;
	delete [] _tab;
	return ;
}

Array &Array::operator=(const Array &array) {
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}
