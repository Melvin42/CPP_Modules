/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:07:22 by melperri          #+#    #+#             */
/*   Updated: 2022/01/19 18:04:09 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Contact::Contact()
{
	ft_first_name();
	ft_last_name();
	ft_nickname();
	ft_phone_number();
	ft_darkest_secret();
}

void	Contact::ft_first_name()
{
	std::cout << "Enter first name :";
	std::getline(std::cin, m_first_name);
}


void	Contact::ft_last_name()
{
	std::cout << "Enter last name :";
	std::getline(std::cin, m_last_name);
}

void	Contact::ft_nickname()
{
	std::cout << "Enter nickname :";
	std::getline(std::cin, m_nickname);
}

void	Contact::ft_phone_number()
{
	std::cout << "Enter phone number :";
	std::getline(std::cin, m_phone_number);
}

void	Contact::ft_darkest_secret()
{
	std::cout << "Enter darkest secret :";;
	std::getline(std::cin, m_darkest_secret);
}

void	Contact::ft_display()
{
	std::cout << m_first_name << std::endl;
	std::cout << m_last_name << std::endl;
	std::cout << m_nickname << std::endl;
	std::cout << m_phone_number << std::endl;
	std::cout << m_darkest_secret << std::endl;
}
