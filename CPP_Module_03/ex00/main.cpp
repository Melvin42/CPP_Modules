/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:07:38 by melperri          #+#    #+#             */
/*   Updated: 2022/02/19 05:17:15 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	john("John");
	ClapTrap	rambo("Rambo");

	rambo.attack(john.getName());
	rambo.beRepaired(1);
	rambo.attack(john.getName());
	rambo.beRepaired(2);
	rambo.attack(john.getName());
	rambo.beRepaired(1);
	rambo.attack(john.getName());
// main a finir et accesseur;
	return 0;
}
