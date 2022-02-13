/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:25:51 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:44:11 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "phonebook.h"

class PhoneBook {
	public :

	PhoneBook();
	void	add_contact(const int i);
	void	ft_display(const int size);

	private :

	Contact contacts[8];
};

#endif
