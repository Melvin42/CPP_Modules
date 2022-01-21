/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:02:55 by melperri          #+#    #+#             */
/*   Updated: 2022/01/21 01:29:17 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.h"

class Contact {
	public :

	Contact();
	void		add_first_name();
	void		add_last_name();
	void		add_nickname();
	void		add_phone_number();
	void		add_darkest_secret();
	std::string	format_str(std::string str);
	void		search_display(const int i);
	void		display_one(const int i);;

	private :

	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;
};

#endif
