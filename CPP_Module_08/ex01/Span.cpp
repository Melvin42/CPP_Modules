/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:07:56 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 15:07:56 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	std::cout << GREEN_IT << "Default constructor called" << END_COLOR << std::endl;
	return ;
}

Span::Span(const Span &span) {
	std::cout << GREEN_IT << "Copy constructor called" << END_COLOR << std::endl;
	*this = span;
	return ;
}

Span::~Span() {
	std::cout << GREEN_IT << "Destructor called" << END_COLOR << std::endl;
	return ;
}

Span &Span::operator=(const Span &span) {
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}
