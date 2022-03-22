/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:49:00 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:23:31 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << GREEN_IT << "Dog default constructor called"
		<< END_COLOR << std::endl;;
	return ;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	*this = dog;
	std::cout << GREEN_IT << "Dog copy constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Dog::~Dog() {
	std::cout << GREEN_IT << "Dog destructor called"
		<< END_COLOR << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &dog) {
	this->_type = dog._type;
	std::cout << "Dog copy assignement operator called"
		<< std::endl;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Wouuuuuuuuuuuuuaaaaaafff!" << std::endl;
	return ;
}
