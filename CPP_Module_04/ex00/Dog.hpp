/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:54:31 by melperri          #+#    #+#             */
/*   Updated: 2022/03/11 21:54:31 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include "Animal.hpp"

class Dog : public Animal {
	public:

		Dog();
		Dog(const Dog &dog);
		~Dog();

		Dog &operator=(const Dog &dog);

		virtual void	makeSound(void) const;
	private:
};

#endif
