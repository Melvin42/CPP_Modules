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
#include <cstring>
#include <limits>

enum	e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

int	ft_parsing(std::string str) {
	int		count_dot = 0;
	size_t	end = str.size();
	size_t	i = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf"
			|| str == "-inf" || str == "+inf" || str == "nan")
		return 0;
	if (str.size() == 1) {
		return 0;
	} else {
		if (str[0] == '-') {
			i++;
			if (str[i] == '.')
				return -1;
		}
		if (str[end - 1] == 'f')
			end -= 1;
		while (i != end) {
			if (i != 0 && str[i] == '.') {
				i++;
				count_dot++;
			}
			if (i != end && !(str[i] >= '0' && str[i] <= '9'))
				return -1;
			if (count_dot > 1)
				return -1;
			i++;
		}
	}
	return 0;
}

int	ft_detect_type(std::string str) {
	if (str[str.size()] == 'f'
			|| str == "-inff" || str == "+inff" || str == "nanf")
		return FLOAT;
	else if (str.size() == 1 && (isspace(str[0]) || isprint(str[0]))
			&& !isdigit(str[0]))
		return CHAR;
	else {
		if (str == "-inf" || str == "+inf" || str == "nan")
			return DOUBLE;
		for (int i = 0; str[i]; i++) {
			if (str[i] == '.')
				return DOUBLE;
		}
	}
	return INT;
}

int	ft_check_int_limit(std::string str) {
	if (str[0] == '-') {
		if (str.size() > 11)
			return -1;
		else if (str.size() == 11) {
			if (str.compare("-2147483648") > 0)
				return -1;
		} else
			return 0;
	} else {
		if (str.size() > 10)
			return -1;
		else if (str.size() == 10) {
			if (str.compare("2147483647") > 0)
				return (-1);
		} else
			return 0;
	}
	return 0;
}

void	is_char(char c)
{
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	if (i == f) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	return ;
}

void	is_int(char *av)
{
	std::string	str = av;
	int			i = atoi(av);
	char		c = static_cast<char>(i);
	float		f = static_cast<float>(i);
	double		d = static_cast<double>(i);

	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (ft_check_int_limit(str) != -1) {
		std::cout << "int: " << i << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (i == f) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	return ;
}

void	is_float(char *av)
{
	std::string	str = av;
	char		*endptr;
	float		f = strtof(av, &endptr);
	char		c = static_cast<char>(f);
	int			i = static_cast<int>(f);
	double		d = static_cast<double>(f);

	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (str == "-inff" || str == "+inff" || str == "nanf")
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (i == f) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	return ;
}

void	is_double(char *av)
{
	std::string	str = av;
	char		*endptr;
	double		d = strtod(av, &endptr);
	char		c = static_cast<char>(d);
	int			i = static_cast<int>(d);
	float		f = static_cast<float>(d);

	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (str == "-inf" || str == "+inf" || str == "nan")
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (str == "-inf" || str == "+inf" || str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (i == f) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	return ;
}

int	main(int ac, char **av) {
	if (ac == 2) {
		if (ft_parsing(av[1]) == -1) {
			std::cout << "Bad argument" << std::endl;
			return (-1);
		}
		int	type = ft_detect_type(av[1]);

		switch (type) {
			case CHAR:
				is_char(av[1][0]);
				break ;
			case INT:
				is_int(av[1]);
				break ;
			case FLOAT:
				is_float(av[1]);
				break ;
			case DOUBLE:
				is_double(av[1]);
				break ;
		}
	} else {
		std::cout << "Program take a string as parameter" << std::endl;
	}
	return 0;
}
