/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 02:11:38 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:41:56 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(int ac, char **av) {
	(void)ac;
	(void)av;
	PhoneBook	phonebook;
	int			i = 0;
	int			size = 0;

	std::cout << "$>";
	for (std::string line; std::getline(std::cin, line);) {
		if (std::strcmp(line.c_str(), ADD) == 0) {
			phonebook.add_contact(i);
			i++, size++;
			if (i == 8)
				i = 0;
		} else if (std::strcmp(line.c_str(), SEARCH) == 0) {
			if (size > 8)
				size = 8;
			phonebook.ft_display(size);
		} else if (std::strcmp(line.c_str(), EXIT) == 0)
			exit(0);
		else
			std::cout << "Bad command." << std::endl;
		std::cout << "$>";
	}
	return 0;
}
