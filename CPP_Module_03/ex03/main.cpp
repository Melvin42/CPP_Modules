/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:07:38 by melperri          #+#    #+#             */
/*   Updated: 2022/04/04 11:58:55 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	{
		DiamondTrap	diamond;

		diamond.printStatus();
	}
	{
		ClapTrap	rambo("Rambo");
		ScavTrap	scav("Michel");
		FragTrap	fragy("Jean-Albert");
		DiamondTrap	diamond("diamond");

		rambo.printStatus();
		scav.printStatus();
		fragy.printStatus();
		diamond.printStatus();

		scav.guardGate();
		rambo.attack(fragy.getName());
		fragy.attack(rambo.getName());
		rambo.takeDamage(fragy.getAttack());
		rambo.beRepaired(10);
		fragy.highFivesGuys();
		scav.attack(fragy.getName());
		fragy.takeDamage(scav.getAttack());
		while (scav.getHit() > 0) {
			fragy.attack(scav.getName());
			scav.takeDamage(fragy.getAttack());
		}
		scav.guardGate();
		while (fragy.getHit() > 0) {
			diamond.attack(fragy.getName());
			fragy.takeDamage(diamond.getAttack());
		}

		rambo.printStatus();
		scav.printStatus();
		fragy.printStatus();
		diamond.printStatus();

	}
	return 0;
}
