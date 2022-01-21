/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:23:56 by melperri          #+#    #+#             */
/*   Updated: 2022/01/21 09:16:34 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << ':' << "Destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ':' << "BraiiiiiiinnnzzzZ..." << std::endl;
}
