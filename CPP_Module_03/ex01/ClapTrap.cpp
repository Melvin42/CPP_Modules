/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:09:49 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 14:45:06 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Clap"), _hit(10), _energy(10), _attack(0) {
	std::cout << GREEN_IT << "Claptrap " << _name
		<< " default constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0) {
	std::cout << GREEN_IT << "Claptrap " << _name
		<< " parametric constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	*this = claptrap;
	std::cout << GREEN_IT << "Claptrap " << _name
		<< " copy constructor called" << END_COLOR << std::endl;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << GREEN_IT << "Claptrap " << _name
		<< " destructor called" << END_COLOR << std::endl;
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
	if (this->_energy == 0 || this->_hit == 0) {
		ft_print_energy(*this);
		ft_print_hit(*this);
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
	if (this->_hit < amount) {
		this->_hit = 0;
	} else {
		this->_hit -= amount;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy == 0 || this->_hit == 0) {
		ft_print_energy(*this);
		ft_print_hit(*this);
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

void	ClapTrap::printStatus(void) const {
	std::cout << "name:   " << _name << '\n'
		<< "hit:    " << _hit << '\n'
		<< "energy: " << _energy << '\n'
		<< "attack: " << _attack << '\n' << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energy = claptrap._energy;
	_attack = claptrap._attack;
	std::cout << GREEN_IT << "Claptrap " << _name
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}
