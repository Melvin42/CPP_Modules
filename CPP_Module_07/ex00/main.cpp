/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:40:53 by melperri          #+#    #+#             */
/*   Updated: 2022/03/25 15:59:33 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main() {

	int a = 0;
	int b = 42;

	std::cout << min(a, b) << " is lower than " << max(a, b) << std::endl;

	std::cout << "Before swap a = " << a << '\n'
		<< "Before swap b = " << b << std::endl;

	swap(&a, &b);

	std::cout << "After swap a = " << a << '\n'
		<< "After swap b = " << b << std::endl;

	return 0;
}
