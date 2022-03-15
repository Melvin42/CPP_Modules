/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 04:08:49 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 15:33:38 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "AAnimal.hpp"

class WrongAnimal : public AAnimal {
	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &wronganimal);

		void	makeSound(void) const;
	private:
};

#endif
