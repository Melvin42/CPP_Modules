/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 04:49:25 by melperri          #+#    #+#             */
/*   Updated: 2022/03/25 13:16:43 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>


struct	Data {
	int	*data;
};

uintptr_t	serialize(Data *str) {
	return reinterpret_cast<uintptr_t>(str);
}

Data	*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main() {

	Data	obj;
	int		n = 42;
	
	obj.data = &n;
	std::cout << "Data = " << *obj.data << std::endl;
	std::cout << "Serialize = " << serialize(&obj) << std::endl;
	std::cout << "Data = " << *obj.data << std::endl;
	std::cout << "Deserialize = " << deserialize((uintptr_t)obj.data) << std::endl;
	std::cout << "Data = " << *obj.data << std::endl;
	n = 48;
	obj.data = &n;
	std::cout << "Serialize = " << serialize(&obj) << std::endl;
	std::cout << "Data = " << *obj.data << std::endl;
	std::cout << "Deserialize = " << deserialize((uintptr_t)obj.data) << std::endl;
	std::cout << "Serialize = " << serialize(&obj) << std::endl;
	std::cout << "Data = " << *obj.data << std::endl;
	return 0;
}
