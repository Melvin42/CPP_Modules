/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:23:14 by melperri          #+#    #+#             */
/*   Updated: 2022/04/05 17:29:38 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

#define GREEN_IT "\033[32;3m"
#define END_COLOR "\033[0m"

class Base {
	public:
		virtual	~Base();
};

#endif
