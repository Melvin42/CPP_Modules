/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 04:19:03 by melperri          #+#    #+#             */
/*   Updated: 2022/03/17 05:34:00 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _sign(false), _sign_grade(0), _exec_grade(0) {
	std::cout << GREEN_IT << "Default " << _name
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

Form::Form(const Form &form) : _name(form._name), _sign(form._sign),
	_sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {
	_sign = form._sign;
	std::cout << GREEN_IT << "Copy " << _name
		<< " constructor called" << END_COLOR << std::endl;
	*this = form;
	return ;
}

Form::~Form() {
	std::cout << GREEN_IT << _name << " destructor called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	Form::getName() {
	return _name;
}

bool	Form::getSign() {
	return _sign;
}

int	Form::getSignGrade() {
	return _sign_grade;
}

int Form::getExecGrade() {
	return _exec_grade;
}

Form &Form::operator=(const Form &form) {
	_sign = form._sign;
	std::cout << GREEN_IT << _name
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}
