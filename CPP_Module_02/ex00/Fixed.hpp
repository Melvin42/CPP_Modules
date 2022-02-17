/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:12:13 by melperri          #+#    #+#             */
/*   Updated: 2022/02/17 07:17:17 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &obj);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed &operator=(const Fixed& fixed);

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

#endif
