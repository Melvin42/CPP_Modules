/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:54:31 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 15:31:28 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:

		Dog();
		Dog(const Dog &dog);
		~Dog();

		Dog &operator=(const Dog &dog);

		virtual void	makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif
