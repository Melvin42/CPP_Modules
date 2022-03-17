/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:07:58 by melperri          #+#    #+#             */
/*   Updated: 2022/03/17 01:41:56 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat") {
	std::cout << GREEN_IT << "Default " << _name << " constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	_name = name;
	_grade = grade;
	std::cout << GREEN_IT << "Parametric " << _name << " constructor called"
		<< END_COLOR << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	_name = bureaucrat._name;
	_grade = bureaucrat._grade;
	*this = bureaucrat;
	std::cout << GREEN_IT << "Copy " << _name << " constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat() {
	std::cout << GREEN_IT << "Destructor called"
		<< END_COLOR << std::endl;
	return ;
}

std::string	Bureaucrat::getName() const {
	return _name;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

void	Bureaucrat::increment() {
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrement() {
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

const char	*Bureaucrat::GradeTooHighException::wath() const throw() {
	return "Bureaucrat::GradeTooHighException";
}

const char	*Bureaucrat::GradeTooLowException::wath() const throw() {
	return "Bureaucrat::GradeTooLowException";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	_name = bureaucrat._name;
	_grade = bureaucrat._grade;
	std::cout << GREEN_IT << "Copy " << _name << " assignement operator called"
		<< END_COLOR << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << " , bureaucrat grade "
		<< bureaucrat.getGrade() << ".";
	return os;
}
