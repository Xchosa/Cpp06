/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:19:43 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/24 10:57:37 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include "math.h"

// first what type \// convert
// handle invalid inputs




bool check_for_double (std::string nbr)
{
	// try to convert nbr into doulbe 
	try{
		int v = std::stod(nbr);
		return true;
	}
	catch (const std::invalid_argument&)
	{
		return false;
	}
	catch (const std::out_of_range&)
	{
		return false;
	}
};

// cast and handle the errors 
void ScalarConverter::convert(std::string nbr)
{
	

	char stringNbr;
	int IntNbr;
	float flotNbr;
	double doNbr;

	int identifier;

	//IntNbr = static_cast<int>(nbr);
	
	
	
	if (check_for_double(nbr) == false)
	{
		//std::cout << "char: impossible" << std::endl;
        //std::cout << "int: impossible" << std::endl;
        //std::cout << "float: impossible" << std::endl;
        //std::cout << "double: impossible" << std::endl;
        return;
	}
		
	doNbr = std::stod(nbr);
	floatNbr = std::stof(nbr);
	
	
	
};

void text_impossible()
{
	std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}
/*

std::isdigit -> bool nbr
std::isatoi -> string to 
std::stof -> string to float
*/


// immer dieselbe Reihenfolge
//char:'*'
//int: 42
//float: 42.0f
//double: 42.011