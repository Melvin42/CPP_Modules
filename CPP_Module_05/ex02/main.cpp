/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:09:04 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 11:41:08 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
		Bureaucrat	bob("Bob", 1);
		AForm *form = new PresidentialPardonForm("form");
		std::cout << bob << std::endl;
		std::cout << *form << std::endl;
		bob.signForm(*form);

		AForm *form2 = new PresidentialPardonForm();
		Bureaucrat	marley("Marley", 150);
		std::cout << *form2 << std::endl;
		marley.signForm(*form2);

		delete form;
		delete form2;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	bob("Bob", 1);
		const AForm *president = new PresidentialPardonForm("Tower");
		const AForm *robotomy = new RobotomyRequestForm("Garage");
		const AForm *shrubbery = new ShrubberyCreationForm("Garden");
		std::cout << bob << std::endl;

		president->action();
		robotomy->action();
		shrubbery->action();

		bob.executeForm(*president);

		delete president;
		delete robotomy;
		delete shrubbery;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
