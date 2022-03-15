/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:53:08 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 15:36:01 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <string>

class AAnimal {
	public:

		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal();

		std::string	getType(void) const;

		AAnimal &operator=(const AAnimal &animal);

		virtual void	makeSound(void) const = 0;

	protected:
		std::string	_type;
};

#endif
