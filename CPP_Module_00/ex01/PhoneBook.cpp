/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:25:48 by melperri          #+#    #+#             */
/*   Updated: 2022/01/21 03:32:02 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

PhoneBook::PhoneBook()
{
}

void	PhoneBook::add_contact(const int i)
{
	contacts[i].add_first_name();
	contacts[i].add_last_name();
	contacts[i].add_nickname();
	contacts[i].add_phone_number();
	contacts[i].add_darkest_secret();
}

void	PhoneBook::ft_display(const int size)
{
	std::string	index;

	for (int i = 0; i < size; i++) {
		contacts[i].search_display(i);
	}
	std::cout << "Enter index :";
	std::getline(std::cin, index);
	if (index.compare("0") == 0)
		contacts[0].display_one(0);
	else if (index.compare("1") == 0)
		contacts[1].display_one(1);
	else if (index.compare("2") == 0)
		contacts[2].display_one(2);
	else if (index.compare("3") == 0)
		contacts[3].display_one(3);
	else if (index.compare("4") == 0)
		contacts[4].display_one(4);
	else if (index.compare("5") == 0)
		contacts[5].display_one(5);
	else if (index.compare("6") == 0)
		contacts[6].display_one(6);
	else if (index.compare("7") == 0)
		contacts[7].display_one(7);
	else
		std::cout << "Bad index" << std::endl;
}
