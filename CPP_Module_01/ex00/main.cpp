/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 08:40:56 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:51:52 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av) {
	(void)ac;
	(void)av;
	Zombie*	Elise;
	Zombie	Lucie("Lucie");

	Elise = newZombie("Elise");
	Elise->announce();
	randomChump("Marcel");
	Lucie.announce();
	delete Elise;
	return 0;
}
