/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:46:16 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 10:28:57 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <cstdint>
#include <iostream>

struct Data
{
	int id;
	std::string name;
	float value;
};



class Serializer
{
	private:
	Serializer(){};
	~Serializer(){};
	Serializer(const Serializer &object);
	const Serializer& operator=(const Serializer &object);

	public:
	static uintptr_t serialize(Data* ptr);
	// It takes a pointer and converts it to the unsigned integer type uintptr_t.
	
	static Data* deserialize(uintptr_t raw);
	// It takes an unsigned integer parameter and converts it to a pointer to Data.
};
