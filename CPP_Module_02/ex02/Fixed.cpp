/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:11:51 by melperri          #+#    #+#             */
/*   Updated: 2022/02/23 16:02:50 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << GREEN << "Default constructor called" << END_COLOR << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << GREEN << "Copy constructor called" << END_COLOR << std::endl;
	*this = obj;
	return ;
}

Fixed::Fixed(const int n) {
	std::cout << GREEN << "Int constructor called" << END_COLOR << std::endl;
	_fixedPoint = n << _fractionalBits;
	return ;
}

Fixed::Fixed(const float n) {
	std::cout <<  GREEN << "Float constructor called" << END_COLOR << std::endl;
	_fixedPoint = (int)roundf(n * (float)(1 << _fractionalBits));
	return ;
}

Fixed::~Fixed() {
	std::cout <<  GREEN << "Destructor called" << END_COLOR << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPoint = raw;
	return ;
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPoint / (float)(1 << _fractionalBits));
}

int	Fixed::toInt(void) const {
	return _fixedPoint >> _fractionalBits;
}

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << GREEN << "Copy assignement operator called" << END_COLOR << std::endl;

	_fixedPoint = obj._fixedPoint;
	return *this;
}

bool	Fixed::operator>(const Fixed &fixed) {
	if (this->_fixedPoint > fixed._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed &fixed) {
	if (this->_fixedPoint < fixed._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed &fixed) {
	if (this->_fixedPoint <= fixed._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed &fixed) {
	if (this->_fixedPoint <= fixed._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed &fixed) {
	if (this->_fixedPoint == fixed._fixedPoint)
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed &fixed) {
	if (this->_fixedPoint != fixed._fixedPoint)
		return true;
	else
		return false;
}

Fixed	&Fixed::operator++() {
	_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--() {
	_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	--*this;
	return (tmp);
}

Fixed	Fixed::operator+(const Fixed &fixed) {
	Fixed	res(*this);

	res._fixedPoint += fixed._fixedPoint;
	return res;
}

Fixed	Fixed::operator-(const Fixed &fixed) {
	Fixed	res(*this);

	res._fixedPoint -= fixed._fixedPoint;;
	return res;
}

Fixed	Fixed::operator*(const Fixed &fixed) {
	Fixed	res(*this);

	res._fixedPoint *= fixed.toInt();
	return res;
}

Fixed	Fixed::operator/(const Fixed &fixed) {
	Fixed	res(*this);

	res._fixedPoint /= fixed.toInt();
	return res;
}

Fixed &min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a._fixedPoint < b._fixedPoint)
		return a;
	else
		return b;
}

Fixed &max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {

	if (a._fixedPoint > b._fixedPoint)
		return a;
	else
		return b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}
