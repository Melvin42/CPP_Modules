/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:07:30 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 15:07:30 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
	public:

		Span();
		Span(const Span &span);
		~Span();

		Span &operator=(const Span &span);

	private:
};

#endif
