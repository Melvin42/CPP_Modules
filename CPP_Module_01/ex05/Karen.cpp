/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:25:03 by melperri          #+#    #+#             */
/*   Updated: 2022/02/17 03:09:22 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
}

Karen::~Karen() {
}

void	Karen::complain(std::string level) {
	void		(*ptr[4])(void) = {debug, info, warning, error};
	const char	*str[4] = {"debug", "info", "warning", "error"};

	for(int i = 0; i < 4; i++) {
		if (level.compare(str[i]) == 0) {
			ptr[i]();
			break ;
		}
	}
}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]" << '\n'
		<< "To help you to debug, i put all in a log file." << '\n' << std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]" << '\n'
		<< "Hello, today there is a beautifull blue sky with sun." << '\n' << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]" << '\n'
		<< "WARNING! There a bomb in the office!" << '\n' << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]" << '\n'
		<< "ERROR! Let's try again!" << '\n' << std::endl;
}
