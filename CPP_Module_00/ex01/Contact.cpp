/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:03:17 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:41:09 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Contact::Contact() {
}

void	Contact::add_first_name() {
	m_first_name = "";
	while (m_first_name.empty()) {
		std::cout << "Enter first name :";
		std::getline(std::cin, m_first_name);
	}
}

void	Contact::add_last_name() {
	m_last_name = "";
	while (m_last_name.empty()) {
		std::cout << "Enter last name :";
		std::getline(std::cin, m_last_name);
	}
}

void	Contact::add_nickname() {
	m_nickname = "";
	while (m_nickname.empty()) {
		std::cout << "Enter nickname :";
		std::getline(std::cin, m_nickname);
	}
}

void	Contact::add_phone_number() {
	m_phone_number = "";
	while (m_phone_number.empty()) {
		std::cout << "Enter phone number :";
		std::getline(std::cin, m_phone_number);
	}
}

void	Contact::add_darkest_secret() {
	m_darkest_secret = "";
	while (m_darkest_secret.empty()) {
		std::cout << "Enter darkest secret :";
		std::getline(std::cin, m_darkest_secret);
	}
}

std::string	Contact::format_str(std::string str) {
	if (str.length() < 10)
		str.resize(10, ' ');
	else if (str.length() > 10) {
		str.resize(9, '.');
		str.resize(10, '.');
	}
	return (str);
}

void	Contact::search_display(const int i) {
	std::cout << "    " << i << "     " << '|'
		<< format_str(m_first_name) << '|'
		<< format_str(m_last_name) << '|'
		<< format_str(m_nickname) << '|'
		<< format_str(m_phone_number) << '|'
		<< format_str(m_darkest_secret) << std::endl;
}

void	Contact::display_one(const int i) {
	if (m_first_name.compare("") != 0) {
		std::cout << "Index: " << i << std::endl;
		std::cout << "First_name: " << m_first_name << std::endl;
		std::cout << "Last_name: " << m_last_name << std::endl;
		std::cout << "Nickname: " << m_nickname << std::endl;
		std::cout << "Phone_number: " << m_phone_number << std::endl;
		std::cout << "Darkest_secret: " << m_darkest_secret << std::endl;
	} else {
		std::cout << "Empty contact." << std::endl;
	}
}
