/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:07:38 by melperri          #+#    #+#             */
/*   Updated: 2022/03/08 18:37:49 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	rambo("Rambo");
	ScavTrap	scav("Michel");
	FragTrap	fragy("Jean-Albert");

	rambo.printStatus();
	scav.printStatus();
	fragy.printStatus();

	scav.guardGate();
	rambo.attack(fragy.getName());
	fragy.attack(rambo.getName());
	rambo.takeDamage(fragy.getAttack());
	rambo.beRepaired(10);
	fragy.highFivesGuys();
	scav.attack(fragy.getName());
	fragy.takeDamage(scav.getAttack());
	fragy.attack(scav.getName());
	scav.takeDamage(fragy.getAttack());
	fragy.attack(scav.getName());
	scav.takeDamage(fragy.getAttack());
	fragy.attack(scav.getName());
	scav.takeDamage(fragy.getAttack());
	fragy.attack(scav.getName());
	scav.takeDamage(fragy.getAttack());
	scav.guardGate();

	rambo.printStatus();
	scav.printStatus();
	fragy.printStatus();

	return 0;
}
