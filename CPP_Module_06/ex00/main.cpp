/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 09:41:26 by melperri          #+#    #+#             */
/*   Updated: 2022/03/18 10:28:36 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>

void	ft_parsing(char *str) {
}

int	main(int ac, char **av) {
	if (ac == 2) {
//		std::string	str = av[1];

		char	c = static_cast<char>(atof(av[1]));
		int		i = static_cast<int>(av[1][0]);
		float	f = static_cast<float>(av[1][0]);
		double	d = static_cast<double>(av[1][0]);

		std::cout << c << std::endl;
		std::cout << i << std::endl;
		std::cout << f << std::endl;
		std::cout << d << std::endl;
	} else {
		std::cout << "Program take a string as parameter" << std::endl;
	}
	return 0;
}
