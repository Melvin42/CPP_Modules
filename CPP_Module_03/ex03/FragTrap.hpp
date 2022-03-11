/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:01:46 by melperri          #+#    #+#             */
/*   Updated: 2022/03/11 21:10:16 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragtrap);
		~FragTrap();

		FragTrap &operator=(const FragTrap &fragtrap);

		void	highFivesGuys(void);
	private:
};

#endif
