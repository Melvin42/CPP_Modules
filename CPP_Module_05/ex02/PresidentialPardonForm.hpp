/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:47:13 by melperri          #+#    #+#             */
/*   Updated: 2022/03/23 16:23:26 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &form);
		~PresidentialPardonForm();

		virtual std::string	getTarget() const;
		virtual void		action() const;

	private:
		const std::string	_target;
		PresidentialPardonForm &operator=(const PresidentialPardonForm & /* form */ );
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);

#endif
