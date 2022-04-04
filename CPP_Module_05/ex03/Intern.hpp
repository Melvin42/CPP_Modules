/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:54:51 by melperri          #+#    #+#             */
/*   Updated: 2022/04/04 14:54:51 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:

		Intern();
		Intern(const Intern &intern);
		~Intern();

		AForm	*allocPresidentialPardonForm(std::string target);
		AForm	*allocRobotomyRequestForm(std::string target);
		AForm	*allocShrubberyCreationForm(std::string target);

		AForm	*makeForm(std::string formName, std::string target) const;

		Intern &operator=(const Intern &intern);

	private:
};

#endif
