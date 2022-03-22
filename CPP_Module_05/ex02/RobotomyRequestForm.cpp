/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:23:36 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 17:23:36 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << GREEN_IT << "Default RobotomyRequestForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: _target(target) {
	std::cout << GREEN_IT << "Parametric RobotomyRequestForm " << _target
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) {
	*this = form;
	std::cout << GREEN_IT << "Copy RobotomyRequestForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << GREEN_IT << "Destructor RobotomyRequestForm called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	RobotomyRequestForm::getTarget() {
	return _target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
	std::cout << "Copy RobotomyRequestForm assignement operator called"
		<< std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form) {
	os << form.getName() << ", form sign is "
		<< form.getSign()
		<< ",\nsign grade is "
		<< form.getSignGrade()
		<< ",\nexecution grade is "
		<< form.getExecGrade() << ".";
	return os;
}
