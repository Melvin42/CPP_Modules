/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:25:03 by melperri          #+#    #+#             */
/*   Updated: 2022/02/25 04:43:35 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
}

Karen::~Karen() {
}

void	Karen::complain(std::string level) {
	void		(*ptr[4])(void) = {debug, info, warning, error};
	const char	*str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++) {
		if (level.compare(str[i]) == 0) {
			while(i < 4) {
				ptr[i]();
				i++;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
