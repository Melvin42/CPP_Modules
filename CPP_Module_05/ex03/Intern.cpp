/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:54:49 by melperri          #+#    #+#             */
/*   Updated: 2022/04/04 14:54:49 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << GREEN_IT << "Default constructor called" << END_COLOR << std::endl;
	return ;
}

Intern::Intern(const Intern &intern) {
	std::cout << GREEN_IT << "Copy constructor called" << END_COLOR << std::endl;
	*this = intern;
	return ;
}

Intern::~Intern() {
	std::cout << GREEN_IT << "Destructor called" << END_COLOR << std::endl;
	return ;
}

AForm	*Intern::allocPresidentialPardonForm(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::allocRobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::allocShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string formName, std::string target) const {
	AForm	*form;
	AForm	*(Intern::*ptr[3])(std::string) =
		{&Intern::allocPresidentialPardonForm,
			&Intern::allocRobotomyRequestForm,
			&Intern::allocShrubberyCreationForm};

	Intern	instance;

	std::string	str[3] = {"presidential pardon", "robotomy request",
		"shrubbery creation"};
	for (int i = 0; i < 3; i++) {
		if (formName.compare(str[i]) == 0) {
			std::cout << "Intern creates " << " form" << std::endl;
			form = (instance.*ptr[i])(target);
			return form;
		}
	}
	std::cout << "Error: Can't alloc form" << std::endl;
	return NULL;
}

Intern &Intern::operator=(const Intern &intern) {
	std::cout << "Copy assignement operator called" << std::endl;
	(void)intern;
	return *this;
}
