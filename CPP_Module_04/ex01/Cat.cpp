/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:53:30 by melperri          #+#    #+#             */
/*   Updated: 2022/03/12 23:44:19 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << GREEN_IT << "Cat default constructor called" << END_COLOR << std::endl;
	_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << GREEN_IT << "Cat copy constructor called" << END_COLOR << std::endl;
	*this = cat;
	return ;
}

Cat::~Cat() {
	std::cout << GREEN_IT << "Cat destructor called" << END_COLOR << std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat copy assignement operator called" << std::endl;
	this->_type = cat._type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miiaaaaaaaouuuuuuuuuuuuu!" << std::endl;
	return ;
}
