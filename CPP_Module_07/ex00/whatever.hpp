/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:48:10 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 19:06:27 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void	swap(T &a, T &b) {
	T	tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template <typename T> T	const &min(T const &a, T const &b) {;;
		return (a < b ? a : b );
}

template <typename T> T	const &max(T a, T b) {
		return (a > b ? a : b );
}

#endif
