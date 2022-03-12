/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:08:49 by melperri          #+#    #+#             */
/*   Updated: 2022/03/12 04:33:19 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal : public Animal {
	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &wronganimal);

		void	makeSound(void) const;
	private:
};

#endif
