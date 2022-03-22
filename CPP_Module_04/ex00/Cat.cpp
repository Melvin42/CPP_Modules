/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:53:30 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:23:15 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << GREEN_IT << "Cat default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	*this = cat;
	std::cout << GREEN_IT << "Cat copy constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Cat::~Cat() {
	std::cout << GREEN_IT << "Cat destructor called"
		<< END_COLOR << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &cat) {
	this->_type = cat._type;
	std::cout << "Cat copy assignement operator called"
		<< std::endl;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Miiaaaaaaaouuuuuuuuuuuuu!" << std::endl;
	return ;
}
