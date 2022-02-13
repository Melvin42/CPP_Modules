/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:50:21 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 23:23:49 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cstring>

class Zombie {

	public :

	Zombie();
	~Zombie();
	void	announce();
	void	setName(std::string name);

	private :

	std::string	_name;

};

Zombie*	zombieHorde(int N, std::string name);

#endif
