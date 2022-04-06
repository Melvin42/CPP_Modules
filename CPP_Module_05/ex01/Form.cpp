/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 04:19:03 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 11:38:07 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _sign(false), _sign_grade(150), _exec_grade(150) {
	std::cout << GREEN_IT << "Default " << _name
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

Form::Form(std::string name, int sign_grade, int exec_grade) :
	_name(name), _sign(false), _sign_grade(sign_grade), _exec_grade(exec_grade) {;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	std::cout << GREEN_IT << "Parametric " << _name
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

std::string	Form::getName() const {
	return _name;
}

bool	Form::getSign() const {
	return _sign;
}

int	Form::getSignGrade() const {
	return _sign_grade;
}

int	Form::getExecGrade() const {
	return _exec_grade;
}

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _sign_grade)
		_sign = true;
	else
		throw GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw() {
	return "Grade Too High Exception";
}

const char	*Form::GradeTooLowException::what() const throw() {
	return "Grade Too Low Exception";
}

Form &Form::operator=(const Form &form) {
	_sign = form._sign;
	std::cout << GREEN_IT << _name
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Form &form) {
	os << form.getName() << ", form sign is "
		<< form.getSign()
		<< ",\nsign grade is "
		<< form.getSignGrade()
		<< ",\nexecution grade is "
		<< form.getExecGrade() << ".";
	return os;
}
