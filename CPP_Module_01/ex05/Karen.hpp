/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:25:02 by melperri          #+#    #+#             */
/*   Updated: 2022/02/17 02:55:54 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>


class Karen {
	public :
		Karen();
		~Karen();
		void	complain(std::string level);

	private :
		static void	debug(void);
		static void	info(void);
		static void	warning(void);
		static void	error(void);
};

#endif
