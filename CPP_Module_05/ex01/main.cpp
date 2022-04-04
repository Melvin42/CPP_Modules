/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:09:04 by melperri          #+#    #+#             */
/*   Updated: 2022/04/04 12:45:33 by melperri         ###   ########.fr       */
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

	try {
		Bureaucrat	bob("Bob", 1);
		Form form;
		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		bob.signForm(form);

		Form form2("hard", false, 1, 1);
		Bureaucrat	marley("Marley", 150);
		std::cout << form2 << std::endl;
		marley.signForm(form2);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
