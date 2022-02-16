/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:23:31 by melperri          #+#    #+#             */
/*   Updated: 2022/02/16 23:12:59 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	Weapon	sword = Weapon("Beautiful sword");

	HumanA	bob("Bob", sword);
	bob.attack();
	sword.setType("Broken sword");
	bob.attack();

	Weapon	axe = Weapon("Beautiful axe");

	HumanB	jim("Jim");
	jim.setWeapon(axe);
	jim.attack();
	axe.setType("Broken axe");
	jim.attack();
	return 0;
}
