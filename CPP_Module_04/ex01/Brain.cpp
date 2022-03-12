/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:29:07 by melperri          #+#    #+#             */
/*   Updated: 2022/03/12 21:26:40 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN_IT << "Brain default constructor called" << END_COLOR << std::endl;
	return ;
}

Brain::Brain(const Brain &brain) {
	std::cout << GREEN_IT << "Brain copy constructor called" << END_COLOR << std::endl;
	*this = brain;
	return ;
}

Brain::~Brain() {
	std::cout << GREEN_IT << "Brain destructor called" << END_COLOR << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "Brain copy assignement operator called" << std::endl;
	for (size_t i; i < brain._ideas->length(); i++) {
		this->_ideas[i] = brain._ideas[i];
	}
	return *this;
}
