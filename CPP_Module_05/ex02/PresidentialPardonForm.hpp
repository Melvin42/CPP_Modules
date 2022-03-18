/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:47:13 by melperri          #+#    #+#             */
/*   Updated: 2022/03/18 04:47:13 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm {
	public:

		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm(std::string name, bool sign, int sign_grade, int exec_grade);
		~PresidentialPardonForm();

		std::string	getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void		beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		Form &operator=(const Form &form);

	private:
		const std::string	_name;
		bool				_sign;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);

#endif
