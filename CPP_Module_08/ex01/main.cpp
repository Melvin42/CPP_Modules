/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:05:49 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 20:27:04 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main() {
	try {
		Span sp = Span(9);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::vector<int>	vect(4, 25);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumbers(vect.begin(), vect.end());
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumbers(vect.begin(), vect.end());

	} catch (std::exception &e) {
		std::cout << e.what() <<std::endl;
	}
	return 0;
}
