/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:24:16 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:54:35 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

class Zombie {
	public :

	Zombie(std::string name);
	~Zombie();
	void	announce();

	private :

	std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
