/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:19:54 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/25 11:47:42 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <string>
#include <iostream>

class ScalarConverter
{
	private:


	public:
	ScalarConverter(){};
	~ScalarConverter(){};
	ScalarConverter(const ScalarConverter &object);
	ScalarConverter& operator= (const ScalarConverter &object);
	static void convert(std::string nbr);

	
	
};

//struct Data
//{
//	int id;
//	std::string name;
//	float value;
//};



//class Serializer
//{
//	private:
//	Serializer(){};
//	~Serializer(){};
//	Serializer(const Serializer &object);
//	Serializer& operator=(const Serializer &object);

//	public:
//	uintptr_t serialize(Data* ptr);
//	// It takes a pointer and converts it to the unsigned integer type uintptr_t.
	
//	Data* deserialize(uintptr_t raw);
//	// It takes an unsigned integer parameter and converts it to a pointer to Data.
//}


/*
char
• int
• float
• double

*/