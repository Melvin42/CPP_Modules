/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:01:46 by melperri          #+#    #+#             */
/*   Updated: 2022/03/08 16:01:46 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef fragtrap_HPP
#define fragtrap_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
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
