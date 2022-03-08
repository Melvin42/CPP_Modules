/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 04:10:14 by melperri          #+#    #+#             */
/*   Updated: 2022/03/07 13:52:54 by melperri         ###   ########.fr       */
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

		const std::string	getName(void) const;
		int					getHit(void) const;
		int					getEnergy(void) const;
		unsigned int		getAttack(void) const;
		void				setName(std::string name);
		void				setHit(int hit);
		void				setEnergy(int energy);
		void				setAttack(unsigned int attack);

		void				attack(const std::string &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		void				printStatus(void) const;

		ClapTrap &operator=(const ClapTrap &claptrap);

	protected:

		std::string			_name;
		unsigned int		_hit;
		unsigned int		_energy;
		unsigned int		_attack;
};

void						ft_print_energy(const ClapTrap &claptrap);
void						ft_print_hit(const ClapTrap &claptrap);

#endif
