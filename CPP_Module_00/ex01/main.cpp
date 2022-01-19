/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:53:09 by melperri          #+#    #+#             */
/*   Updated: 2022/01/19 18:05:14 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Contact	contacts[8];
	int		i = 0;

	std::cout << "$>";
	for (std::string line; std::getline(std::cin, line);) {
		if (std::strcmp(line.c_str(), ADD) == 0)
		{
			Contact	new_contact;

			contacts[i++] = new_contact;
		}
		else if (std::strcmp(line.c_str(), SEARCH) == 0)
		{
			for (int i = 0; i < 8; i++) {
				contacts[i].ft_display();
			}
		}
		else if (std::strcmp(line.c_str(), EXIT) == 0)
			exit(0);
		else
			std::cout << "Bad command." << std::endl;
		std::cout << "$>";
	}
	return (0);
}
