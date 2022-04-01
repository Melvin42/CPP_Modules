/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:24:00 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 15:24:00 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

class MutantStack {
	public:

		MutantStack();
		MutantStack(const MutantStack &mutantstack);
		~MutantStack();

		MutantStack &operator=(const MutantStack &mutantstack);

	private:
};

#endif
