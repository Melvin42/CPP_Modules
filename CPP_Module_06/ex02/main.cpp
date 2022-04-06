/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 04:49:25 by melperri          #+#    #+#             */
/*   Updated: 2022/04/05 18:10:30 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate() {
	srand((unsigned)time(0));

	Base			*base = NULL;
	unsigned int	randNum = (rand() % 3) + 1;

	switch (randNum) {
		case 1:
			base = new A();
			break ;
		case 2:
			base = new B();
			break ;
		case 3:
			base = new C();
			break ;
	}

	return base;
}

void	identify(Base *p) {
	if (!p)
		return ;

	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "Type class is : A" << std::endl;
	else if (b != NULL)
		std::cout << "Type class is : B" << std::endl;
	else if (c != NULL)
		std::cout << "Type class is : C" << std::endl;
	return ;
}

void	identify(Base &p) {
	try {
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type class is : A" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		B	&b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Type class is : B" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		C	&c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Type class is : C" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return ;
}

int	main() {
	Base	*p = generate();
	Base	&ref = *p;

	identify(p);
	identify(ref);
	identify(*p);

	delete p;
	return -1;
}
