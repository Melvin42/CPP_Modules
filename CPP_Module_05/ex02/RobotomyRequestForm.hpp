/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:04:18 by melperri          #+#    #+#             */
/*   Updated: 2022/04/06 11:55:20 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &form);
		~RobotomyRequestForm();

		std::string		getTarget() const;
		virtual void	action() const;

	private:
		const std::string	_target;
		RobotomyRequestForm &operator=(const RobotomyRequestForm & /* form */);
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form);

#endif
