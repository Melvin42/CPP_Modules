/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:47:02 by melperri          #+#    #+#             */
/*   Updated: 2022/03/18 04:47:02 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << GREEN_IT << "Default PresidentialPardonForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: _target(target) {
	std::cout << GREEN_IT << "Parametric PresidentialPardonForm " << _target
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) {
	*this = form;
	std::cout << GREEN_IT << "Copy PresidentialPardonForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << GREEN_IT << "Destructor PresidentialPardonForm called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	getTarget() {
	return _target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form) {
	std::cout << "Copy PresidentialPardonForm assignement operator called"
		<< std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form) {
	os << form.getName() << ", form sign is "
		<< form.getSign()
		<< ",\nsign grade is "
		<< form.getSignGrade()
		<< ",\nexecution grade is "
		<< form.getExecGrade() << ".";
	return os;
}
