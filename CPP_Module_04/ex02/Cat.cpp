/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:53:30 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:28:04 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
	_brain = new Brain();
	std::cout << GREEN_IT << "Cat default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Cat::Cat(const Cat &cat) : AAnimal(cat) {
	*this = cat;
	std::cout << GREEN_IT << "Cat copy constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Cat::~Cat() {
	std::cout << GREEN_IT << "Cat destructor called"
		<< END_COLOR << std::endl;
	delete _brain;
	return ;
};

Cat &Cat::operator=(const Cat &cat) {
	_type = cat._type;
	_brain = new Brain();
	*_brain = *(cat._brain);
	std::cout << GREEN_IT << "Cat copy assignement operator called"
		<< END_COLOR << std::endl;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miiaaaaaaaouuuuuuuuuuuuu!" << std::endl;
	_brain->printIdeas();
	return ;
}
