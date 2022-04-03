/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:07:56 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 19:16:15 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _vector(0), _size(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int size) : _vector(0), _size(size) {
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

Span::Span(const Span &span) {
	std::cout << "Copy constructor called" << std::endl;
	*this = span;
	return ;
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Span::addNumber(unsigned int n) {
//	std::cout << _size ;
	if (_vector.size() + 1 <= _size)
		this->_vector.push_back(n);
	else
		throw std::out_of_range("than unsigned int");
}

void	display(int i) {
	std::cout << i << std::endl;
}
void	Span::addNumbers(std::vector<int>::const_iterator first,
		std::vector<int>::const_iterator last) {
	std::vector<int>::const_iterator tmp = first;

	while (first != last) {
		this->_vector.push_back(*first);
		first++;
	}
	for_each(tmp, last, display);
//	else
//		throw std::out_of_range("N bigger than unsigned int");
}

int	Span::shortestSpan() {
	std::vector<int>::const_iterator	tmp, next;
	int value = 0;
	size_t i = 0;

	for_each(this->_vector.begin(), this->_vector.end(), display);
	std::sort(this->_vector.begin(), this->_vector.end());

	while (i < 4) {
		tmp = next;
//		next = this->_vector.begin() + i;
//		if (*tmp > *next) {
//			if (*tmp - *next > value)
//				value = *tmp - *next;
//		} else if (*tmp < *next) {
//			if (*next - *tmp > value)
//				value = *next - *tmp;
//		}
		i++;
	}

	return value;
}

int	Span::longestSpan() const {
	std::vector<int>::const_iterator	min, max;

	min = std::min_element(this->_vector.begin(), this->_vector.end());
	max = std::max_element(this->_vector.begin(), this->_vector.end());

	return *max - *min;
}

Span	&Span::operator=(const Span &span) {
	std::cout << "Copy assignement operator called" << std::endl;
	std::copy(span._vector.begin(), span._vector.end(), this->_vector.begin());
	this->_size = span._size;
	return *this;
}
