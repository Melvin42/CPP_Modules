/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:04:56 by melperri          #+#    #+#             */
/*   Updated: 2022/03/11 20:41:54 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Frag") {
	this->setHit(100);
	this->setEnergy(100);
	this->setAttack(30);
	std::cout << GREEN_IT << "fragtrap " << this->getName()
		<< " default constructor called" << END_COLOR << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setHit(100);
	this->setEnergy(100);
	this->setAttack(30);
	std::cout << GREEN_IT << "fragtrap " << this->getName()
		<< " parametric constructor called" << END_COLOR << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap) {
	std::cout << GREEN_IT << "fragtrap " << this->getName()
		<< " copy constructor called" << END_COLOR << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << GREEN_IT << "fragtrap " << this->getName()
		<< " destructor called" << END_COLOR << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
	this->setName(fragtrap.getName());
	this->setHit(fragtrap.getHit());
	this->setEnergy(fragtrap.getEnergy());
	this->setAttack(fragtrap.getAttack());
	std::cout << GREEN_IT << "fragtrap " << this->getName()
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	if (this->getHit() > 0)
		std::cout << this->getName() << " check me that bro!" << std::endl;
	else
		std::cout << this->getName() << " can't check you, he is dead.." << std::endl;
}
