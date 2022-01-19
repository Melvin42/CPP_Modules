/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:06:38 by melperri          #+#    #+#             */
/*   Updated: 2022/01/19 17:57:57 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.h"

class Contact {
	public :

	Contact();
	void	ft_first_name();
	void	ft_last_name();
	void	ft_nickname();
	void	ft_phone_number();
	void	ft_darkest_secret();
	void	ft_display();

	private :

	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;
};

#endif
