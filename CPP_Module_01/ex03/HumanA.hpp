/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:11:21 by melperri          #+#    #+#             */
/*   Updated: 2022/02/16 23:14:00 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
