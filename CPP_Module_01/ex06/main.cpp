/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:33:30 by melperri          #+#    #+#             */
/*   Updated: 2022/02/25 04:42:23 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av) {
	if (ac == 2) {
		Karen	karen;
		
		karen.complain(av[1]);
	} else {
		std::cout << "Error: Bad number of argument." << std::endl;
	}
	return 0;
}
