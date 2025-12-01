/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:19:43 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 10:27:13 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include "math.h"
#include <iomanip>
#include <climits>


ScalarConverter::ScalarConverter(const ScalarConverter &object)
{
	(void)object;
};
ScalarConverter& ScalarConverter::operator= (const ScalarConverter &object)
{
	(void)object;
    return (*this);
}

void text_impossible();


bool check_for_double (std::string nbr)
{	
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


bool check_for_char(std::string nbr)
{

	if(std::isprint(nbr[0]) && nbr.length() == 1 && !std::isdigit(nbr[0]))
		return true;
	return false;
	
}
void handle_char(std::string nbr)
{
	char c = '\0';

	if(nbr.length() == 1 && std::isprint(nbr[0]))
	{
		c = nbr[0];
	}
	
	if(static_cast<int>(nbr[0]) <= 32)
	{
		std::cout << "char: Non displayable"  << std::endl;
		std::cout << "int:" << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}
	
	else if(nbr.length() == 1 && std::isprint(nbr[0]))
	{
		c = nbr[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int:" << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}
	else
	{
		text_impossible();
	}
}

void char_conversion(double doNbr, bool isNan, bool isInf)
{
	if (isNan || isInf)
		std::cout << "char: impossible" << std::endl;
	else if (doNbr < 0 || doNbr > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(doNbr)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(doNbr) << "'" << std::endl;
}

void int_conversion(double doNbr, bool isNan, bool isInf)
{
	if (isNan || isInf || doNbr > INT_MAX || doNbr < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(doNbr) << std::endl;
}

void float_conversion(double doNbr, bool isInf, bool isNan)
{
	float floatNbr = static_cast<float>(doNbr);
	if (isInf || isNan)
	 	std::cout << "float: " << floatNbr << "f" << std::endl;
	else if (floatNbr == static_cast<float>(static_cast<int>(floatNbr)))
        std::cout << "float: " << floatNbr << ".0f" << std::endl;
    else
        std::cout << "float: " << floatNbr << "f"<< std::endl;
}

void double_conversion(double doNbr, bool isInf, bool isNan)
{
	if (isInf || isNan)
		std::cout << "double: " << doNbr << std::endl;
	else if (doNbr == static_cast<double>(static_cast<int>(doNbr)))
		std::cout << "double: " << doNbr << ".0" << std::endl;
    else
        std::cout << "double: " << doNbr << std::endl;
}



// cast and handle the errors 
void ScalarConverter::convert(std::string nbr)
{
	if(check_for_char(nbr))
	{
		handle_char(nbr);
		return;
	}
	
	else if(check_for_double(nbr) == false)
	{
		text_impossible();
        return;
	}

	double doNbr = std::stod(nbr);
	bool isNan = std::isnan(doNbr);
    bool isInf = std::isinf(doNbr);

	char_conversion(doNbr, isNan, isInf);
	int_conversion(doNbr, isNan, isInf);
	float_conversion(doNbr, isInf, isNan);
	double_conversion(doNbr, isInf, isNan);
		
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
convert 0
char: Non displayable
int: 0
float:0.0f
double: 0.0

./convert nan
 char: impossible
 int: impossible
 float: nanf
 double: nan
 ./convert 42.0f
char:'*'
int: 42
float: 42.0f
double:  42.011*/