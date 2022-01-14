/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:07:22 by melperri          #+#    #+#             */
/*   Updated: 2022/01/14 17:28:21 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	contact::ft_first_name(const char *first_name)
{
	std::cout << first_name << std::endl;
}

void	contact::ft_last_name(const char *last_name)
{
	std::cout << last_name << std::endl;
}

void	contact::ft_nickname(const char *nickname)
{
	std::cout << nickname << std::endl;
}

void	contact::ft_phone_number(const char *phone_number)
{
	std::cout << phone_number << std::endl;
}

void	contact::ft_darkest_secret(const char *darkest_secret)
{
	std::cout << darkest_secret << std::endl;
}
