/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:47:55 by okrahl            #+#    #+#             */
/*   Updated: 2025/01/10 14:58:16 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
	try {
		// Test default constructor
		Array<int> empty;
		std::cout << "Empty array size: " << empty.size() << std::endl;

		// Test parameterized constructor
		Array<int> numbers(5);
		std::cout << "Number array size: " << numbers.size() << std::endl;

		// Test element access and modification
		for (unsigned int i = 0; i < numbers.size(); i++) {
			numbers[i] = i * 2;
		}

		// Test copy constructor
		Array<int> copy(numbers);
		std::cout << "Copy array size: " << copy.size() << std::endl;

		// Modify original to prove deep copy
		numbers[2] = 100;

		// Print both arrays to show they're independent
		std::cout << "Original array: ";
		for (unsigned int i = 0; i < numbers.size(); i++) {
			std::cout << numbers[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Copy array: ";
		for (unsigned int i = 0; i < copy.size(); i++) {
			std::cout << copy[i] << " ";
		}
		std::cout << std::endl;

		// Test out of bounds exception
		std::cout << "Trying to access out of bounds index..." << std::endl;
		numbers[10] = 0;
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: Array index out of bounds" << std::endl;
	}

	// Test with different type (string)
	Array<std::string> strings(3);
	strings[0] = "Hello";
	strings[1] = "World";
	strings[2] = "!";

	Array<int> arrInt(3);
	for (int i = 0; i < 3; i++)
		arrInt[i] = i + 1;
	const Array<int> arrIntConst(arrInt);
	for (int i = 0; i < 3; i++)
		std::cout << arrIntConst[i] << std::endl;

	std::cout << "String array: ";
	for (unsigned int i = 0; i < strings.size(); i++) {
		std::cout << strings[i] << " ";
	}
	std::cout << std::endl;

	return 0;
} 