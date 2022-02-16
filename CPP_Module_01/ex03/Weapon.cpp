/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:30:22 by melperri          #+#    #+#             */
/*   Updated: 2022/02/16 23:12:10 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon() {
}

std::string const&	Weapon::getType() {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type;
}
