/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:07:38 by melperri          #+#    #+#             */
/*   Updated: 2022/03/08 15:36:04 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	rambo("Rambo");
	ScavTrap	scav_def;

	scav_def.printStatus();
	scav_def.setName("John");
	scav_def.printStatus();

	ScavTrap	scav_cpy(scav_def);
	ScavTrap	scav_name("Michel");

	FragTrap	fragy("Jean-Albert");

	rambo.printStatus();
	scav_def.printStatus();
	scav_cpy.printStatus();
	scav_name.printStatus();
	fragy.printStatus();

	ft_print_hit(scav_cpy);
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	scav_cpy.beRepaired(1);
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	ft_print_hit(rambo);
	ft_print_hit(scav_cpy);
	scav_cpy.beRepaired(2);
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	scav_cpy.beRepaired(1);
	ft_print_hit(rambo);
	ft_print_hit(scav_cpy);
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	scav_cpy.attack(rambo.getName());
	rambo.takeDamage(scav_cpy.getAttack());
	scav_cpy.attack(rambo.getName());
	scav_cpy.beRepaired(1);

	rambo.printStatus();
	scav_def.printStatus();
	scav_cpy.printStatus();
	scav_name.printStatus();
	fragy.printStatus();

	return 0;
}
