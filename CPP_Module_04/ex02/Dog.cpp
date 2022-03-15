/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:49:00 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 15:31:34 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << GREEN_IT << "Dog default constructor called"
		<< END_COLOR << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &dog) : AAnimal(dog) {
	std::cout << GREEN_IT << "Dog copy constructor called"
		<< END_COLOR << std::endl;
	*this = dog;
	return ;
}

Dog::~Dog() {
	std::cout << GREEN_IT << "Dog destructor called"
		<< END_COLOR << std::endl;
	delete _brain;
	return ;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << GREEN_IT << "Dog copy assignement operator called"
		<< END_COLOR << std::endl;
	_type = dog._type;
	_brain = new Brain();
	*_brain = *(dog._brain);
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Wouuuuuuuuuuuuuaaaaaafff!" << std::endl;
	_brain->printIdeas();
	return ;
}
