/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:31:03 by melperri          #+#    #+#             */
/*   Updated: 2022/02/16 23:11:55 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <cstring>

class Weapon {
	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string const&	getType();
		void				setType(std::string type);

	private:

		std::string _type;
};

#endif
