/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:04:56 by melperri          #+#    #+#             */
/*   Updated: 2022/03/05 16:32:27 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << GREEN_IT << "Scav's default constructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap) {
	std::cout << GREEN_IT << "Scav's copy constructor called" << END_COLOR << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << GREEN_IT << "Scav's destructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	std::cout << "Scav's copy assignement operator called" << std::endl;
	this->setName(scavtrap.getName());
	this->setHit(scavtrap.getHit());
	this->setEnergy(scavtrap.getEnergy());
	this->setAttack(scavtrap.getAttack());
	return *this;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
}
