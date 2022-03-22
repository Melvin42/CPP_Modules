/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:49:00 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:28:20 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	_brain = new Brain();
	std::cout << GREEN_IT << "Dog default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Dog::Dog(const Dog &dog) : AAnimal(dog) {
	*this = dog;
	std::cout << GREEN_IT << "Dog copy constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Dog::~Dog() {
	std::cout << GREEN_IT << "Dog destructor called"
		<< END_COLOR << std::endl;
	delete _brain;
	return ;
}

Dog &Dog::operator=(const Dog &dog) {
	_type = dog._type;
	_brain = new Brain();
	*_brain = *(dog._brain);
	std::cout << GREEN_IT << "Dog copy assignement operator called"
		<< END_COLOR << std::endl;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Wouuuuuuuuuuuuuaaaaaafff!" << std::endl;
	_brain->printIdeas();
	return ;
}
