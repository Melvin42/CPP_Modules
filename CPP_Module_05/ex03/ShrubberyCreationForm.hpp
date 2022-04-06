/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 05:18:53 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 12:14:04 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		~ShrubberyCreationForm();

		std::string		getTarget() const;
		virtual void	action() const;

	private:
		const std::string	_target;
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm & /* form */);
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form);

#endif
