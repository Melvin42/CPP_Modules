/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:06:38 by melperri          #+#    #+#             */
/*   Updated: 2022/01/14 17:22:14 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.h"

class contact {
	public :

	void	ft_first_name(const char *first_name);
	void	ft_last_name(const char *last_name);
	void	ft_nickname(const char *nickname);
	void	ft_phone_number(const char *phone_number);
	void	ft_darkest_secret(const char *darkest_secret);

	private :

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
