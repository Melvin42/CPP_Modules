/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 04:49:25 by melperri          #+#    #+#             */
/*   Updated: 2022/03/22 05:14:13 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>

struct	Data {
	void	*data;
};

uintptr_t	serialize(Data *str) {
	return reinterpret_cast<uintptr_t>(str);
}

Data	*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main() {

	Data	obj;
	
	obj.data = (void *)42;
	serialize();
	deserialize();
	
	std::cout << obj.data << std::endl;
	return 0;
}
