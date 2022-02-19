/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:10:14 by melperri          #+#    #+#             */
/*   Updated: 2022/02/19 05:10:39 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define GREEN_IT "\033[32;3m"
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "string"

class ClapTrap {
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();

		const std::string	getName(void);
//		const int			getHit(void);
//		const int			getEnergy(void);
//		const int			getAttack(void);

		void				attack(const std::string &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

	private:

		std::string	_name;
		int			_hit;
		int			_energy;
		int			_attack;
};

#endif
