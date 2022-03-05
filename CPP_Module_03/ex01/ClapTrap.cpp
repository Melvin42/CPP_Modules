/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:09:49 by melperri          #+#    #+#             */
/*   Updated: 2022/03/05 16:33:47 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << GREEN_IT << "Clap's default constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(100), _energy(50), _attack(20) {
	std::cout << GREEN_IT << "Clap's parametric constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	std::cout << GREEN_IT << "Clap's copy constructor called" << END_COLOR << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN_IT << "Clap's destructor called" << END_COLOR << std::endl;
	return ;
}

const std::string	ClapTrap::getName(void) const {
	return this->_name;
}

int	ClapTrap::getEnergy(void) const {
	return this->_energy;
}

int	ClapTrap::getHit(void) const {
	return this->_hit;
}

unsigned int	ClapTrap::getAttack(void) const {
	return this->_attack;
}

void	ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setHit(int hit) {
	_hit = hit;
}

void	ClapTrap::setEnergy(int energy) {
	_energy = energy;
}

void	ClapTrap::setAttack(unsigned int attack) {
	_attack = attack;
}

void	ft_print_energy(const ClapTrap &claptrap) {
	std::cout << "ClapTrap " << claptrap.getName()
		<< " has " << GREEN << claptrap.getEnergy() << END_COLOR
		<< " points of energy..." << std::endl;
}

void	ft_print_hit(const ClapTrap &claptrap) {
	std::cout << claptrap.getName() << " has "
		<< GREEN << claptrap.getHit() << END_COLOR
		<< " hit points." << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energy <= 0) {
		ft_print_energy(*this);
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
	if (this->_hit - (int)amount < 0) {
		this->_hit = 0;
	} else {
		this->_hit -= amount;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy <= 0) {
		ft_print_energy(*this);
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

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << "Clap's copy assignement operator called" << std::endl;
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energy = claptrap._energy;
	_attack = claptrap._attack;
	return *this;
}
