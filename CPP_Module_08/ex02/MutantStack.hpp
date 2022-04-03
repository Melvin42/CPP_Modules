/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:24:00 by melperri          #+#    #+#             */
/*   Updated: 2022/04/03 21:51:27 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T> class MutantStack : public std::stack<T> {
	public:

		MutantStack();
		MutantStack(const MutantStack &mutantstack);
		~MutantStack();

//		empty();
//		void	push();
//		int		size();
//		emplace();
//		top();
//		swap;

		MutantStack &operator=(const MutantStack &mutantstack);

	private:
};

template <class T>
MutantStack<T>::MutantStack() {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &mutantstack) {
	std::cout << "Copy constructor called" << std::endl;
	*this = mutantstack;
	return ;
}

template <class T>
MutantStack<T>::~MutantStack() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &mutantstack) {
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

#endif
