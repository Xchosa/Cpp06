/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:19:43 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/24 18:05:31 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include "math.h"

// first what type \// convert
// handle invalid inputs

void text_impossible();


bool check_for_double (std::string nbr)
{
	// try to convert nbr into doulbe 
	try{
		std::stod(nbr);
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


bool check_for_int(std::string nbr)
{
	try{
		std::stoi(nbr);
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
}

bool check_for_char(std::string nbr)
{
	try{
		std::itoa(nbr);
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
	
}

// cast and handle the errors 
void ScalarConverter::convert(std::string nbr)
{
	

	std::string stringNbr;
	int IntNbr;
	float floatNbr;
	double doNbr;

	//int identifier;

	//IntNbr = static_cast<int>(nbr);
	
	
	
	if (check_for_double(nbr) == false)
	{
		text_impossible();
        return;
	}
	//doNbr = static_cast<double>(nbr);
	doNbr = std::stod(nbr);
	floatNbr = std::stof(nbr);
	if(!check_for_int(nbr))
		IntNbr = '*';
	
	if(!check_for_char(nbr))
		stringNbr = "inpossible";
	
	
	std::cout << "char: " << stringNbr << std::endl;
    std::cout << "int: "<< IntNbr << std::endl;
    std::cout << "float: " << floatNbr << std::endl;
    std::cout << "double: " << doNbr << std::endl;

	return;

	
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

/*
convert 0char: Non displayabl
eint: 0float:
 0.0fdouble: 
 0.0./convert 
 nanchar: impossible
 int: impossible
 float: nanf
 double: nan
 ./convert 42.0f
char:'*'
int: 42float: 
42.0fdouble:
42.011*/