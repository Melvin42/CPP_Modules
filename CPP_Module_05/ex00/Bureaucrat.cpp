/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:07:58 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 16:07:58 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << GREEN_IT << "Default constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	std::cout << GREEN_IT << "Copy constructor called"
		<< END_COLOR << std::endl;
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat() {
	std::cout << GREEN_IT << "Destructor called"
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	std::cout << GREEN_IT << "Copy assignement operator called" << std::endl;
	return *this;
}
