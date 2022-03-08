/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:04:49 by melperri          #+#    #+#             */
/*   Updated: 2022/03/07 12:52:44 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &scavtrap);

		void	guardGate(void);
	private:
};

#endif
