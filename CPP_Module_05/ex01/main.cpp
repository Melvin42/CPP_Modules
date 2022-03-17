/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:09:04 by melperri          #+#    #+#             */
/*   Updated: 2022/03/17 05:35:34 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp" 
int	main() {
	try {
		Bureaucrat	bob("Bob", 1);
		Bureaucrat	marley("Marley", 150);
	
		std::cout << bob << std::endl;
		std::cout << marley << std::endl;
		marley.increment();
		std::cout << marley << std::endl;
		bob.increment();
		marley.decrement();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	bob("Bob", 1);
		Bureaucrat	marley("Marley", 150);

		std::cout << bob << std::endl;
		std::cout << marley << std::endl;
		bob.increment();
		marley.decrement();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	bob("Bob", 1);
		Bureaucrat	marley("Marley", 150);

		std::cout << bob << std::endl;
		std::cout << marley << std::endl;
		marley.increment();
		bob.decrement();
		std::cout << bob << std::endl;
		std::cout << marley << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	bob("Bob", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
