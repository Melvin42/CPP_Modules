/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:08:16 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 16:08:16 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <stdexcept>

class Bureaucrat {
	public:

		Bureaucrat();
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	private:
		const	
};

#endif
