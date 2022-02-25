/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:04:56 by melperri          #+#    #+#             */
/*   Updated: 2022/02/25 05:04:56 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << GREEN_IT << "Default constructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	std::cout << GREEN_IT << "Copy constructor called" << END_COLOR << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << GREEN_IT << "Destructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}
