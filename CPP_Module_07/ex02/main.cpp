/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:04:53 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 14:55:55 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Array.hpp"
//#include <Array.hpp>

#define MAX_VAL 750

int main(int, char**)
{
	try {
		Array<int>	tab;

		int		*a = new int();
		char	*test = new char();

		*test = '\0';
		std::cout << *a << std::endl;
		std::cout << *test << std::endl;

		delete a;
		delete test;

		std::cout << tab[1] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Array<int>	tab2(4);

		tab2[0] = 0;
		tab2[1] = 1;
		tab2[2] = 2;
		tab2[3] = 3;

		std::cout << tab2[0] << '\n'
			<< tab2[1] << '\n'
			<< tab2[2] << '\n'
			<< tab2[3] << std::endl;
				std::cout << tab2[4] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Array<std::string> stringArray(5);

		stringArray[0] = "test0";
		stringArray[1] = "test1";
		stringArray[2] = "test2";
		stringArray[3] = "test3";
		stringArray[4] = "test4";

		for (size_t i = 0; i < stringArray.size(); i++) {
			std::cout << stringArray[i] << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}
