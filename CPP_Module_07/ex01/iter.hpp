/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:05:44 by melperri          #+#    #+#             */
/*   Updated: 2022/04/12 14:17:17 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename R, typename F> void	iter(T *addr, size_t length, R (*fct)(F)) {
	for (size_t i = 0; i < length; i++) {
		fct(addr[i]);
	}
}

template <typename T> void	iter(T *addr, size_t length, void (*fct)(T const &)) {
	for (size_t i = 0; i < length; i++) {
		fct(addr[i]);
	}
}

#endif
