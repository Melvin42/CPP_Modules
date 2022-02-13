/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:17:06 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:55:16 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	if (N < 0)
		return NULL;

	Zombie	ZombieHorde[N];

//	for (int i = 0; i < N; i++) {
//		ZombieHorde[i].Zombie(name);
//	}
	return ZombieHorde;
}
