/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:50:04 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 23:34:45 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

int	main(int ac, char **av) {
	(void)ac;
	(void)av;
	Zombie *ZombieHorde = zombieHorde(0, "Robert");
	
	if (ZombieHorde) {
		for (int i = 0; i < 3; i++) {
			ZombieHorde[i].announce();
		}
		delete[] ZombieHorde;
	}
	return 0;
}
