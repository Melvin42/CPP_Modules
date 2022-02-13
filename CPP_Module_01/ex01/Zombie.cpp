/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:50:25 by melperri          #+#    #+#             */
/*   Updated: 2022/02/11 16:14:52 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie() {
	std::cout << _name << ':' << "Destroyed" << std::endl;
}

void	Zombie::setName(std::string name) {
	_name = name;
}

void	Zombie::announce() {
	std::cout << _name << ':' << "BraiiiiiiinnnzzzZ..." << std::endl;
}
