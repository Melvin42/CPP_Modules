/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:43:27 by melperri          #+#    #+#             */
/*   Updated: 2022/02/14 01:00:12 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string*&		stringREF = stringPTR;

	std::cout << "Address of the string variable :" << &str	<< '\n'
			<< "Address held by stringPTR :     " << stringPTR << '\n'
			<< "Address held by strinfREF :     " << stringREF << '\n'
			<< "The value of the string variable  :" << str << '\n'
			<< "The value pointed to by stringPTR :" << *stringPTR << '\n'
			<< "The value pointed to by stringREF :" << *stringREF << std::endl;
	return 0;
}
