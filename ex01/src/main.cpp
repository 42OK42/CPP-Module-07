/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:47:55 by okrahl            #+#    #+#             */
/*   Updated: 2025/01/10 15:23:30 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

// Template function to print any element
template<typename T>
void printElement(const T& element) 
{
    std::cout << element << " ";
}

int main() 
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"Hello", "World", "!"};

    std::cout << "Integer Array: ";
    iter(intArray, 5, printElement<int>);  // Explicit template parameter
    std::cout << std::endl;

    std::cout << "String Array: ";
    iter(strArray, 3, printElement<std::string>);  // Explicit template parameter
    std::cout << std::endl;

    return 0;
} 