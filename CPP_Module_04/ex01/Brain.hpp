/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:29:04 by melperri          #+#    #+#             */
/*   Updated: 2022/03/15 03:22:26 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
	public:

		Brain();
		Brain(const Brain &brain);
		~Brain();

		std::string	getIdeas(size_t i);
		void	printIdeas() const;

		Brain &operator=(const Brain &brain);

	private:
		std::string	_ideas[100];
};

#endif
