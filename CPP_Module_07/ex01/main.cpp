/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:03:23 by melperri          #+#    #+#             */
/*   Updated: 2022/04/12 14:16:09 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	ft_display_int(int i) {
	std::cout << i << '\n';
}

void	ft_display_char(char i) {
	std::cout << i << '\n';
}

class Awesome {
	public:
		Awesome(void):_n(42) { return;}
		int get(void) const {return this->_n;}
	private:
		int	_n;
};

std::ostream &operator<<(std::ostream &o, Awesome const & rhs ) {
	o << rhs.get();
	return o;
}

template <typename T>
void	print(T const &x) {
	std::cout << x << std::endl;
	return ;
}

int main() {
	{
		int	*tab = new int[4];
	
		tab[0] = 0;
		tab[1] = 1;
		tab[2] = 2;
		tab[3] = 3;
	
		::iter(tab, 4, ft_display_int);
	
		char	str[] = {"coucou"};
	
		::iter(str, 7, ft_display_char);
	
		delete [] tab;
	}
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
	return 0;
}
