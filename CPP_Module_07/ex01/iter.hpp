/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:05:44 by melperri          #+#    #+#             */
/*   Updated: 2022/03/29 15:05:44 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


template <class T> void	iter(T &addr, size_t length, T &(*fct)()) {
	for (size_t i = length; i < length; i++) {

		fct(*addr[i]);
	}
}

#endif
