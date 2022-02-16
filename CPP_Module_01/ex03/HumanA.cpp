/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:10:17 by melperri          #+#    #+#             */
/*   Updated: 2022/02/16 23:14:02 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA() {
}

void	HumanA::attack(void) {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
