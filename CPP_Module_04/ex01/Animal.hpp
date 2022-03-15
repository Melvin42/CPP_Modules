/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:53:08 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 02:14:05 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <string>

class Animal {
	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal &animal);
		virtual ~Animal();

		std::string	getType(void) const;

		Animal &operator=(const Animal &animal);

		virtual void	makeSound(void) const;

	protected:
		std::string	_type;
};

#endif
