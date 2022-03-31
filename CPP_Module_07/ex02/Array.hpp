/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:04:50 by melperri          #+#    #+#             */
/*   Updated: 2022/03/31 19:52:36 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
	public:

		Array();
		Array(const Array &array);
		~Array();

		T		&operator[](size_t i) const;
		Array	&operator=(const Array &array);

	private:
		T	*_tab;
};

#endif
