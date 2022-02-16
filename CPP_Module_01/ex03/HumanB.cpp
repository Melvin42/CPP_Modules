/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:10:25 by melperri          #+#    #+#             */
/*   Updated: 2022/02/16 23:12:24 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon &weapon) {;
	_weapon = &weapon;
}

void	HumanB::attack(void) {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
