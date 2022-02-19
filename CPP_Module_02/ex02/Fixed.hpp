/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:12:13 by melperri          #+#    #+#             */
/*   Updated: 2022/02/19 02:33:30 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define GREEN "\033[32;3m"
#define END_COLOR "\033[0m"

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed				&operator=(const Fixed &fixed);

		bool				operator>(const Fixed &fixed);
		bool				operator<(const Fixed &fixed);
		bool				operator>=(const Fixed &fixed);
		bool				operator<=(const Fixed &fixed);
		bool				operator==(const Fixed &fixed);
		bool				operator!=(const Fixed &fixed);

		Fixed				&operator++();
		Fixed				operator++(int);
		Fixed				&operator--();
		Fixed				operator--(int);

		Fixed				operator+(const Fixed &fixed);
		Fixed				operator-(const Fixed &fixed);
		Fixed				operator*(const Fixed &fixed);
		Fixed				operator/(const Fixed &fixed);

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
