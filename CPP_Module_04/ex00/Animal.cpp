/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:52:45 by melperri          #+#    #+#             */
/*   Updated: 2022/03/12 02:46:23 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << GREEN_IT << "Animal default constructor called" << END_COLOR << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << GREEN_IT << "Animal parametric constructor called" << END_COLOR << std::endl;
	return ;
}

Animal::Animal(const Animal &animal) {
	std::cout << GREEN_IT << "Animal " << _type
		<< " copy constructor called" << END_COLOR << std::endl;
	*this = animal;
	return ;
}

Animal::~Animal() {
	std::cout << GREEN_IT << "Animal destructor called" << END_COLOR << std::endl;
	return ;
}

std::string	Animal::getType(void) const {
	return this->_type;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal copy assignement operator called" << std::endl;
	this->_type = animal._type;
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "I'm an Animal who learn how to talk" << std::endl;
	return ;
}
