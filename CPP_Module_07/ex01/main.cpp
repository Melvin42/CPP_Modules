/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:03:23 by melperri          #+#    #+#             */
/*   Updated: 2022/03/31 18:02:19 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	ft_display_int(int i) {
	std::cout << i << '\n';
}

void	ft_display_char(char i) {
	std::cout << i << '\n';
}

int main() {
	int	*tab = new int(4);

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;

	::iter(tab, 4, ft_display_int);

	char	str[] = {"coucou"};

	::iter(str, 7, ft_display_char);

	delete [] tab;
	return 0;
}
