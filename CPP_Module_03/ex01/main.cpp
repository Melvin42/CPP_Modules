/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:07:38 by melperri          #+#    #+#             */
/*   Updated: 2022/02/23 17:35:01 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	john("John");
	ClapTrap	rambo("Rambo");

	ft_print_hit(john);
	ft_print_hit(rambo);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	rambo.beRepaired(1);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	ft_print_hit(john);
	ft_print_hit(rambo);
	rambo.beRepaired(2);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	rambo.beRepaired(1);
	ft_print_hit(john);
	ft_print_hit(rambo);
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	rambo.attack(john.getName());
	john.takeDamage(rambo.getAttack());
	rambo.attack(john.getName());
	rambo.beRepaired(1);

	return 0;
}
