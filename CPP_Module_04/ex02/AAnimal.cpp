/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:52:45 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:27:10 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << GREEN_IT << "AAnimal default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << GREEN_IT << "AAnimal parametric constructor called"
		<< END_COLOR << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &animal) {
	*this = animal;
	std::cout << GREEN_IT << "AAnimal " << _type
		<< " copy constructor called" << END_COLOR << std::endl;
	return ;
}

AAnimal::~AAnimal() {
	std::cout << GREEN_IT << "AAnimal destructor called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const {
	return this->_type;
}

AAnimal &AAnimal::operator=(const AAnimal &animal) {
	this->_type = animal._type;
	std::cout << GREEN_IT << "AAnimal copy assignement operator called"
		<< END_COLOR << std::endl;
	return *this;
}

/*
**void	AAnimal::makeSound(void) const {
**	std::cout << "I'm an AAnimal who learn how to talk" << std::endl;
**	return ;
**}
*/
