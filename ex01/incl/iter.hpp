/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:47:34 by okrahl            #+#    #+#             */
/*   Updated: 2025/01/10 14:56:05 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>  // for size_t

// Template function to apply a function to each element of an array
template<typename T, typename F>
void iter(T* array, size_t length, F func) 
{
	for (size_t i = 0; i < length; i++) 
	{
		func(array[i]);
	}
}

#endif