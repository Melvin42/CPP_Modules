/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:04:56 by melperri          #+#    #+#             */
/*   Updated: 2022/03/08 17:32:38 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->setName("name");
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout << GREEN_IT << "Scavtrap " << this->getName()
		<< " default constructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	this->setName(name);
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout << GREEN_IT << "Scavtrap " << this->getName()
		<< " parametric constructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {//: ClapTrap(scavtrap) {
	std::cout << GREEN_IT << "Scavtrap " << this->getName()
		<< " copy constructor called" << END_COLOR << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << GREEN_IT << "Scavtrap " << this->getName()
		<< " destructor called" << END_COLOR << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
	this->setName(scavtrap.getName());
	this->setHit(scavtrap.getHit());
	this->setEnergy(scavtrap.getEnergy());
	this->setAttack(scavtrap.getAttack());
	std::cout << GREEN_IT << "Scavtrap " << this->getName()
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}

void	ScavTrap::guardGate(void) {
	if (this->getHit() > 0)
		std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << this->getName() << " can't go in Gate keeper mode" << std::endl;
}
