/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:49:32 by melperri          #+#    #+#             */
/*   Updated: 2022/04/05 12:41:01 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int	main(void)
{
//	const AAnimal *meta = new AAnimal();
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	const AAnimal *k = new WrongAnimal();

	std::cout << k->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
//	meta->makeSound();
	k->makeSound();

//	delete meta;
	delete i;
	delete j;
	delete k;

	const AAnimal *together[4];

	for (size_t i = 0; i < 4; i++) {
		if (i % 2 == 0)
			together[i] = new Cat();
		else
			together[i] = new Dog();
	}
	for (size_t i = 0; i < 4; i++) {
		together[i]->makeSound();
	}

	Cat	*cat = new Cat();
	Cat cat_cpy(*cat);

	cat_cpy.makeSound();
	delete cat;
	cat_cpy.makeSound();
	for (size_t i = 0; i < 4; i++) {
		delete together[i];
	}
	return 0;
}
