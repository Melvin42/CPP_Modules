/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:08:16 by melperri          #+#    #+#             */
/*   Updated: 2022/03/17 22:05:42 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

class Form;

#include <iostream>
#include "Form.hpp"

class Bureaucrat {
	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;

		void		increment();
		void		decrement();

		void		signForm(Form &form) const;

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
