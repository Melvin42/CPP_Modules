/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:04:18 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 19:04:18 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &form);
		~RobotomyRequestForm();

		std::string	getTarget();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &form);

	private:
		const std::string	_target;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form);

#endif
