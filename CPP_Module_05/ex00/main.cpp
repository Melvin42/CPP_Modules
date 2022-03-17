/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:09:04 by melperri          #+#    #+#             */
/*   Updated: 2022/03/17 01:41:58 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	marley("Marley", 151);
	
	try {
		if (bob.getGrade() < 1 || bob.getGrade() > 150) {
			throw std::exception();
		} else {
			std::cout << bob.getName() << std::endl;
		}
	}
	catch (std::exception e) {
	}
	return 0;
}
