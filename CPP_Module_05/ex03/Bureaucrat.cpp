/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:07:58 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 12:19:23 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {
	std::cout << GREEN_IT << "Default " << _name << " constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << GREEN_IT << "Parametric " << _name << " constructor called"
		<< END_COLOR << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name) {
	*this = bureaucrat;
	std::cout << GREEN_IT << "Copy " << _name << " constructor called"
		<< END_COLOR << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat() {
	std::cout << GREEN_IT << _name << " Destructor called"
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
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrement() {
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm &form) const {
	if (form.getSign() == true) {
		std::cout << _name << " signed " << form.getName() << std::endl;
	} else {
		try {
			form.beSigned(*this);
			std::cout << _name << " signed " << form.getName() << std::endl;
		} catch(std::exception &e) {
			std::cout << _name << " couldn't sign " << form.getName()
				<< " because " << e.what() << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(AForm const &form) const {
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << _name << " " << e.what() << std::endl;
	}
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High Exception";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {;
	return "Grade Too Low Exception";
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	_grade = bureaucrat._grade;
	std::cout << GREEN_IT << "Copy " << _name << " assignement operator called"
		<< END_COLOR << std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade() << ".";
	return os;
}
