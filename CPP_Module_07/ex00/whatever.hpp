/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:48:10 by melperri          #+#    #+#             */
/*   Updated: 2022/03/25 15:56:19 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

void	swap(int *a, int *b) {
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int		min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

int		max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

#endif
