/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:54:23 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/25 16:25:55 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include "ScalarConverter.hpp"

int main()
{
	
	Data* original = new Data();
    original->id = 42;
    original->name = "Test";
    original->value = 3.14f;

    std::cout << "Original pointer: " << original << std::endl;
    std::cout << "Original data: id=" << original->id << ", name=" << original->name <<  ", value:" << original->value << std::endl;

    // Serialize: pointer -> unsigned integer
    uintptr_t serialized = Serializer::serialize(original);
    std::cout << "Serialized (as integer): " << serialized << std::endl;

    // Deserialize: unsigned integer -> pointer
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized pointer: " << deserialized << std::endl;

    // Verify they point to the Same object in memory
    if (original == deserialized)
        std::cout << "Success: Pointers are equal!" << std::endl;
    else
        std::cout << "Failed: Pointers are NOT equal!" << std::endl;

    // Verify we can still access the data
    std::cout << "Deserialized data: id=" << deserialized->id << ", name=" << deserialized->name <<  ", value:" << original->value << std::endl;


    delete original;
    return 0;

	
    return (0);
}