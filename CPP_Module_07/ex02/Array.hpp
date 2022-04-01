/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melperri <melperri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:04:50 by melperri          #+#    #+#             */
/*   Updated: 2022/04/01 14:57:00 by melperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class	Array {
	public:

		Array();
		Array(unsigned int size);
		Array(const Array &array);
		~Array();

		unsigned int	size() const;

		T		&operator[](unsigned int i) const;
		Array	&operator=(const Array &array);

	private:
		T				*_tab;
		unsigned int	_size;
};

template <typename T>
Array<T>::Array() : _tab(new T[0]), _size(1) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int size) : _tab(new T[size]), _size(size) {
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(const Array &array) {
	*this = array;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::~Array() {
	delete [] _tab;
	std::cout << "Destructor called" << std::endl;
	return ;
}

template <typename T>
unsigned int	Array<T>::size() const {
	return _size;
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) const {
	if (i >= this->_size)
		throw std::out_of_range("array index out of range");
	return this->_tab[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &array) {
	this->_size = array._size;
	this->_tab = new T[array._size];
	for (unsigned int i = 0; i < _size; i++) {
		this->_tab[i] = array[i];
	}
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

#endif
