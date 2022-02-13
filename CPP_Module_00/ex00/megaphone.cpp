/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:14:56 by melperri          #+#    #+#             */
/*   Updated: 2022/02/13 22:40:11 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i != argc; i++) {
			for (int j = 0; argv[i][j]; j++) {
				std::cout << (char)std::toupper(argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
