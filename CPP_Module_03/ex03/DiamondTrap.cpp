/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:14:48 by melperri          #+#    #+#             */
/*   Updated: 2022/04/05 12:17:28 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap("Diamond"), FragTrap("Diamond") {
	ScavTrap	scavtrap;

	this->setEnergy(scavtrap.getEnergy());
	std::cout << GREEN_IT << "Diamondtrap " << this->getName()
		<< " default constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	ScavTrap	scavtrap;

	this->setEnergy(scavtrap.getEnergy());
	std::cout << GREEN_IT << "Diamondtrap " << this->getName()
		<< " parametric constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
	: ClapTrap(diamondtrap) , ScavTrap(diamondtrap), FragTrap(diamondtrap) {
	*this = diamondtrap;
	std::cout << GREEN_IT << "Diamondtrap " << this->getName()
		<< " copy constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap() {
	std::cout << GREEN_IT << "Diamondtrap " << this->getName()
		<< " destructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	this->setName(diamondtrap.getName());
	this->setHit(diamondtrap.getHit());
	this->setEnergy(diamondtrap.getEnergy());
	this->setAttack(diamondtrap.getAttack());
	std::cout << GREEN_IT << "Diamondtrap " << this->getName()
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI(void) {
	if (this->getHit() > 0)
		std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << this->getName() << " can't go in Gate keeper mode" << std::endl;
}
