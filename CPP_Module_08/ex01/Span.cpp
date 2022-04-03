/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:07:56 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 20:11:54 by melperri         ###   ########.fr       */
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
	if (_vector.size() + 1 <= _size)
		this->_vector.push_back(n);
	else
		throw ContentFullException();
}

void	display(int i) {
	std::cout << i << std::endl;
}

void	Span::addNumbers(std::vector<int>::const_iterator first,
		std::vector<int>::const_iterator last) {
	while (first != last) {
		this->addNumber(*first);
		first++;
	}
}

int	Span::shortestSpan() {
	std::vector<int>::const_iterator	tmp, next;
	int									value = 0;
	int									min = INT_MAX;

	std::sort(this->_vector.begin(), this->_vector.end());

	tmp = this->_vector.begin();
	next = this->_vector.begin();
	while (tmp != this->_vector.end()) {
		next = tmp + 1;
		while (next != this->_vector.end()) {
			value = std::abs(*tmp - *next);
			next++;
			if (value == 0)
				return 0;
			if (value < min)
				min = value;
		}
		tmp++;
	}
	return min;
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
