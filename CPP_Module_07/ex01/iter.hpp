/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:05:44 by melperri          #+#    #+#             */
/*   Updated: 2022/03/31 17:52:42 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


template <typename T, typename F> void	iter(T &addr, size_t length, F fct) {
	for (size_t i = 0; i < length; i++) {
		fct(addr[i]);
	}
}

#endif