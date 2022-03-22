/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:29:07 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 15:25:02 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN_IT << "Brain default constructor called"
		<< END_COLOR << std::endl;
	for (size_t i = 0; i < 100; i++) {
		_ideas[i].assign("idea");
	}
	return ;
}

Brain::Brain(const Brain &brain) {
	*this = brain;
	std::cout << GREEN_IT << "Brain copy constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Brain::~Brain() {
	std::cout << GREEN_IT << "Brain destructor called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	Brain::getIdeas(size_t i) {
	if (i < 100)
		return _ideas[i];
	return NULL;
}

void	Brain::printIdeas() const {
	for (size_t i = 0; i < 100; i++) {
		if (i < 99)
			std::cout << i << "_" << _ideas[i] << " ";
		else
			std::cout << i << "_" << _ideas[i] << std::endl;
	}
	return ;
}

Brain &Brain::operator=(const Brain &brain) {
	for (size_t i = 0; i < 100; i++) {
		this->_ideas[i].assign(brain._ideas[i].c_str());
	}
	std::cout << GREEN_IT << "Brain copy assignement operator called"
		<< END_COLOR << std::endl;
	return *this;
}
