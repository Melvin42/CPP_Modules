/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:37:07 by melperri          #+#    #+#             */
/*   Updated: 2022/03/23 16:20:10 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

class Bureaucrat;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	public:

		AForm();
		AForm(const AForm &form);
		AForm(std::string name, bool sign, int sign_grade, int exec_grade);
		virtual ~AForm() = 0;

		std::string	getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void		beSigned(const Bureaucrat &bureaucrat);
		void		execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		virtual std::string	getTarget() const = 0;
		virtual void		action() const;

		AForm &operator=(const AForm &form);

	private:
		const std::string	_name;
		bool				_sign;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
