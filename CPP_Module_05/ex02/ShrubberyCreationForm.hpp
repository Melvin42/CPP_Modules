/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 05:18:53 by melperri          #+#    #+#             */
/*   Updated: 2022/03/18 05:18:53 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

class Bureaucrat;

#include <iostream>
#include "Bureaucrat.hpp"

class ShrubberycreationForm {
	public:

		ShrubberyCreationform();
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm(std::string name, bool sign, int sign_grade, int exec_grade);
		~ShrubberyCreationForm();

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

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);

	private:
		const std::string	_name;
		bool				_sign;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form);

#endif
