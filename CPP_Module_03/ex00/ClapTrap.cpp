/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:09:49 by melperri          #+#    #+#             */
/*   Updated: 2022/02/19 05:16:47 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << GREEN_IT << "Default constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0) {
	std::cout << GREEN_IT << "String constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	std::cout << GREEN_IT << "Copy constructor called" << END_COLOR << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN_IT << "Destructor called" << END_COLOR << std::endl;
	return ;
}

const std::string	ClapTrap::getName(void) {
	return this->_name;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energy <= 0) {
		std::cout << "ClapTrap " << this->_name
			<< " has " << RED << this->_energy << END_COLOR
			<< "points of energy..." << std::endl;
		std::cout << "It can't attack." << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name
			<< " attack " << target
			<< ", causing " << RED << this->_attack << END_COLOR
			<< " points of damage!" << std::endl;
		this->_energy--;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name
		<< ", taking " << RED << amount << END_COLOR
		<< " points of damage!" << std::endl;
	this->_hit -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy <= 0) {
		std::cout << "ClapTrap " << this->_name
			<< " has " << RED << this->_energy << END_COLOR
			<< " points of energy..." << std::endl;
		std::cout << "It can't repair." << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name
			<< ", repaired " << GREEN << amount << END_COLOR
			<< " hit points!" << std::endl;
		this->_hit += amount;
		this->_energy--;
	}
	return ;
}
