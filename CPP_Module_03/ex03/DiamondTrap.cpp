/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:14:48 by melperri          #+#    #+#             */
/*   Updated: 2022/04/04 11:49:31 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap("Diamond"), FragTrap("Diamond") {
	ScavTrap	scavtrap;
	FragTrap	fragtrap;

	this->setHit(fragtrap.getHit());
	this->setEnergy(scavtrap.getEnergy());
	this->setAttack(fragtrap.getAttack());
	std::cout << GREEN_IT << "Diamondtrap " << this->ScavTrap::getName()
		<< " default constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	ScavTrap	scavtrap;
	FragTrap	fragtrap;

	this->setHit(fragtrap.getHit());
	this->setEnergy(scavtrap.getEnergy());
	this->setAttack(fragtrap.getAttack());
	std::cout << GREEN_IT << "Diamondtrap " << this->ScavTrap::getName()
		<< " parametric constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
	: ClapTrap(diamondtrap) , ScavTrap(diamondtrap), FragTrap(diamondtrap) {
	*this = diamondtrap;
	std::cout << GREEN_IT << "Diamondtrap " << this->ScavTrap::getName()
		<< " copy constructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap() {
	std::cout << GREEN_IT << "Diamondtrap " << this->ScavTrap::getName()
		<< " destructor called" << END_COLOR << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
	this->ScavTrap::setName(diamondtrap.ScavTrap::getName());
	this->FragTrap::setHit(diamondtrap.FragTrap::getHit());
	this->ScavTrap::setEnergy(diamondtrap.ScavTrap::getEnergy());
	this->FragTrap::setAttack(diamondtrap.FragTrap::getAttack());
	std::cout << GREEN_IT << "Diamondtrap " << this->ScavTrap::getName()
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI(void) {
	if (this->FragTrap::getHit() > 0)
		std::cout << this->ScavTrap::getName() << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << this->ScavTrap::getName() << " can't go in Gate keeper mode" << std::endl;
}
