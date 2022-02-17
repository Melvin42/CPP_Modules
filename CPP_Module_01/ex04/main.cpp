/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:23:43 by melperri          #+#    #+#             */
/*   Updated: 2022/02/17 01:22:26 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Error: Bad number of argument." << std::endl;
		return -1;
	} else {
		std::string	line;
		std::string	out_file_name = av[1];
		std::string dst = av[2];
		std::string src = av[3];
		std::size_t	found;
		std::ifstream ini_file;
		std::ofstream out_file;

		out_file_name.append(".replace");

		ini_file.open(av[1], std::ifstream::in);
		out_file.open(out_file_name.c_str(), std::ofstream::out | std::ofstream::trunc);

		if (ini_file && out_file) {
			while (getline(ini_file, line)) {
				for(size_t i = 0; line[i]; i++) {
					found = line.find(av[2], i);
					if (i == found) {
						for (size_t j = 0; j < src.length(); j++) {
							out_file << src[j];
						}
						i += dst.length() - 1;
						continue ;
					}
					out_file << line[i];
				}
				out_file << '\n';
			}
		} else {
			std::cout << "Error: Can't read file." << std::endl;
			return -1;
		}
		ini_file.close();
		out_file.close();
	}
	return 0;
} 
