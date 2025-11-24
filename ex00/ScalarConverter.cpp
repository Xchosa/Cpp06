/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:19:43 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/24 09:47:16 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include "math.h"
// first what type \// convert
// handle invalid inputs




int check_for_nbr (std::string nbr)
{
	try{
		int v = std::stoi(nbr);
	}
	catch (const std::invalid_argument&)
	{
		return 1;
	
	}
	catch (const std:: out_of_range&)
	{
		return 2;
	}
};

// cast and handle the errors 
static void convert(std::string nbr)
{
	

	char stringNbr;
	int IntNbr;
	float flotNbr;
	double donbr;

	int identifier;

	//IntNbr = static_cast<int>(nbr);
	
	
	identifier = check_for_nbr(nbr);
		
	
	
	
}


/*

std::isdigit -> bool nbr
std::isatoi -> string to 
std::stof -> string to float
*/

//char:'*'int: 42
//float: 42.0f
//double: 42.011