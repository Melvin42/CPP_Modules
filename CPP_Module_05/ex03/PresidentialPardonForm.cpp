/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:47:02 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 12:33:46 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("President", 25, 5), _target("Default") {
	std::cout << GREEN_IT << "Default PresidentialPardonForm constructor called"
		<< END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("President", 25, 5), _target(target) {
	std::cout << GREEN_IT << "Parametric PresidentialPardonForm " << _target
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
	: AForm(form), _target(form._target) {
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

std::string	PresidentialPardonForm::getTarget() const {
	return _target;
}

void		PresidentialPardonForm::action() const {
	std::cout << _target << " has been pardonned by Zaphod Beeblebrox"
		<< std::endl;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & /* form */) {
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
