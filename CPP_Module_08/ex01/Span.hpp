/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:07:30 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 18:57:46 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:

		Span();
		Span(unsigned int size);
		Span(const Span &span);
		~Span();

		void	addNumber(unsigned int n);
		void	addNumbers(std::vector<int>::const_iterator first,
				std::vector<int>::const_iterator last);
		int		shortestSpan() ;
		int		longestSpan() const;

		Span &operator=(const Span &span);

	private:
		std::vector<int>	_vector;
		unsigned int		_size;
};

#endif
