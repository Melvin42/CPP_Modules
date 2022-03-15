/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:09:03 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 03:57:29 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal("WrongAnimal") {
	std::cout << GREEN_IT << "WrongAnimal default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) : Animal(wronganimal) {
	std::cout << GREEN_IT << "WrongAnimal copy constructor called"
		<< END_COLOR << std::endl;
	*this = wronganimal;
	return ;
}

WrongAnimal::~WrongAnimal() {
	std::cout << GREEN_IT << "WrongAnimal destructor called"
		<< END_COLOR << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal) {
	std::cout << GREEN_IT << "WrongAnimal copy assignement operator called"
		<< END_COLOR << std::endl;
	this->_type = wronganimal._type;
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "I'm not an Animal you are wrong!" << std::endl;
	return ;
}
