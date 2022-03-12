/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:47:33 by melperri          #+#    #+#             */
/*   Updated: 2022/03/12 04:32:49 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:

		Cat();
		Cat(const Cat &cat);
		~Cat();

		Cat &operator=(const Cat &cat);

		virtual void	makeSound(void) const;
	private:
};

#endif
