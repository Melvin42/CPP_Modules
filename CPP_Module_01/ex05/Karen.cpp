/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:25:03 by melperri          #+#    #+#             */
/*   Updated: 2022/02/17 02:43:31 by melperri         ###   ########.fr       */
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
	std::cout << "To help you to debug, i put all in a log file." << std::endl;
}

void	Karen::info(void) {
	std::cout << "Hello, today there is a beautifull blue sky with sun." << std::endl;
}

void	Karen::warning(void) {
	std::cout << "WARNING! There a bomb in the office!" << std::endl;
}

void	Karen::error(void) {
	std::cout << "ERROR! Let's try again!" << std::endl;
}
