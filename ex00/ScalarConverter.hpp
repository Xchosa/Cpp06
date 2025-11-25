/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:19:54 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/25 11:05:24 by poverbec         ###   ########.fr       */
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


/*
char
• int
• float
• double

*/