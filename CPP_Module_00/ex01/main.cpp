/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:53:09 by melperri          #+#    #+#             */
/*   Updated: 2022/01/14 17:25:37 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

static contact	ft_get_contact(contact new_contact)
{
	std::string	input;

	std::cout << "Enter first name :";
	std::getline(std::cin, input);
	new_contact.ft_first_name(input.c_str());
	std::cout << "Enter last name :";
	std::getline(std::cin, input);
	new_contact.ft_last_name(input.c_str());
	std::cout << "Enter nickname :";
	std::getline(std::cin, input);
	new_contact.ft_nickname(input.c_str());
	std::cout << "Enter phone number :";
	std::getline(std::cin, input);
	new_contact.ft_phone_number(input.c_str());
	std::cout << "Enter darkest secret :";;
	std::getline(std::cin, input);
	new_contact.ft_darkest_secret(input.c_str());
	return (new_contact);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::cout << "$>";
	for (std::string line; std::getline(std::cin, line);) {
		if (std::strcmp(line.c_str(), ADD) == 0)
		{
			contact	new_contact;

			new_contact = ft_get_contact(new_contact);
		}
		else if (std::strcmp(line.c_str()	, SEARCH) == 0)
			std::cout << "recherche en cours" << std::endl;
		else if (std::strcmp(line.c_str(), EXIT) == 0)
			exit(0);
		else
			std::cout << "Bad command." << std::endl;
		std::cout << "$>";
	}
	return (0);
}
