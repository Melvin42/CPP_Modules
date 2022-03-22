/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:09:03 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:23:50 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal("WrongAnimal") {
	std::cout << GREEN_IT << "WrongAnimal default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) : Animal(wronganimal) {
	*this = wronganimal;
	std::cout << GREEN_IT << "WrongAnimal copy constructor called"
		<< END_COLOR << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal() {
	std::cout << GREEN_IT << "WrongAnimal destructor called"
		<< END_COLOR << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	this->_type = wronganimal._type;
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound() const {
	std::cout << "I'm not an Animal you are wrong!" << std::endl;
	return ;
}
