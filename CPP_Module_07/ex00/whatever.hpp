/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:48:10 by melperri          #+#    #+#             */
/*   Updated: 2022/03/29 14:51:58 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T> void	swap(T &a, T &b) {
	T	tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template <class T> T	min(T a, T b) {
		return (a < b ? a : b );
}

template <class T> T	max(T a, T b) {
		return (a > b ? a : b );
}

#endif
