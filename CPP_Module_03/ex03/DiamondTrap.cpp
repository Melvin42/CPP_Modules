/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:14:48 by melperri          #+#    #+#             */
/*   Updated: 2022/03/08 19:15:55 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << GREEN_IT << "Default constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) {
	std::cout << GREEN_IT << "Copy constructor called" << END_COLOR << std::endl;
	*this = diamondtrap;
	return ;
}

DiamondTrap::~DiamondTrap() {
	std::cout << GREEN_IT << "Destructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}
