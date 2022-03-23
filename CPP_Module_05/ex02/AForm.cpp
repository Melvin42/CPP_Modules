/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:37:17 by melperri          #+#    #+#             */
/*   Updated: 2022/03/23 16:18:36 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _sign(false), _sign_grade(150), _exec_grade(150) {
	std::cout << GREEN_IT << "Default " << _name
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

AForm::AForm(std::string name, bool sign, int sign_grade, int exec_grade) :
	_name(name), _sign(sign), _sign_grade(sign_grade), _exec_grade(exec_grade) {;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	std::cout << GREEN_IT << "Parametric " << _name
		<< " constructor called" << END_COLOR << std::endl;
	return ;
}

AForm::AForm(const AForm &form) : _name(form._name), _sign(form._sign),
	_sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {
	_sign = form._sign;
	std::cout << GREEN_IT << "Copy " << _name
		<< " constructor called" << END_COLOR << std::endl;
	*this = form;
	return ;
}

AForm::~AForm() {
	std::cout << GREEN_IT << _name << " destructor called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	AForm::getName() const {
	return _name;
}

bool	AForm::getSign() const {
	return _sign;
}

int	AForm::getSignGrade() const {
	return _sign_grade;
}

int AForm::getExecGrade() const {
	return _exec_grade;
}

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= _sign_grade)
		_sign = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executor) const {
	if (this->getSign() == true
		&& executor.getGrade() <= this->getSignGrade())
		this->action();
	else
		std::cout << this->getName() << " not be able to execute "
			<< this->getName() << " form.." << std::endl;
	return ;
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return "Grade Too High Exception";
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return "Grade Too Low Exception";
}

void	AForm::action() const {
	return ;
}

AForm &AForm::operator=(const AForm &form) {
	_sign = form._sign;
	std::cout << GREEN_IT << _name
		<< " copy assignement operator called" << END_COLOR << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << form.getName() << ", form sign is "
		<< form.getSign()
		<< ",\nsign grade is "
		<< form.getSignGrade()
		<< ",\nexecution grade is "
		<< form.getExecGrade() << ".";
	return os;
}
