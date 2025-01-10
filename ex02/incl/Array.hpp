/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:41:23 by okrahl            #+#    #+#             */
/*   Updated: 2025/01/10 15:20:26 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>

template<typename T>
class Array {
private:
	T* _array;
	size_t _size;

public:
	// Default constructor
	Array() : _array(NULL), _size(0) {}

	// Constructor with size parameter
	Array(int n) {
		if (n < 0)
			throw std::invalid_argument("Array size cannot be negative");
		_size = static_cast<size_t>(n);
		_array = new T[_size]();
	}

	// Copy constructor
	Array(const Array& other) : _size(other._size) {
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = other._array[i];
		}
	}

	// Destructor
	~Array() {
		delete[] _array;
	}

	// Assignment operator
	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] _array;
			_size = other._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = other._array[i];
			}
		}
		return *this;
	}

	// Subscript operator
	T& operator[](int index) {
		if (index < 0 || static_cast<size_t>(index) >= _size)
			throw std::out_of_range("Index out of bounds");
		return _array[index];
	}

	const T& operator[](int index) const {
		if (index < 0 || static_cast<size_t>(index) >= _size)
			throw std::out_of_range("Index out of bounds");
		return _array[index];
	}

	// Size getter
	size_t size() const {
		return _size;
	}
};

#endif 