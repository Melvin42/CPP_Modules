/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:11:51 by melperri          #+#    #+#             */
/*   Updated: 2022/02/18 22:57:16 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = n << _fractionalBits;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = (int)roundf(n * (float)(1 << _fractionalBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPoint = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPoint / (float)(1 << _fractionalBits));
}

int	Fixed::toInt(void) const {
	return _fixedPoint >> _fractionalBits;
}

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}
