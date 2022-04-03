/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:04:51 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 11:59:23 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NoValueFoundException : public std::exception {
	public :
		virtual const char *what() const throw() {
			return "Don't found match value";
	}
};

template <typename T> typename T::const_iterator easyfind(T &t, int n) {
	typename T::const_iterator	iter;

	iter = std::find(t.begin(), t.end(), n);
	if (iter == t.end()) {
		throw NoValueFoundException();
	}
	return iter;
};

#endif
