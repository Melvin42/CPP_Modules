/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:04:51 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 17:39:15 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>

template <typename T> T &easyfind(T t, int n) {

	for (size_t	i = 0; i < 4; i++) {
		if (t[i] == n)
			return t[i];
	}
	return t;
};

#endif
