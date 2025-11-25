/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:54:23 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/25 11:11:05 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "main.hpp"

#include "ScalarConverter.hpp"

int main()
{
	
	std::cout << "=== Test 1: char ===" << std::endl;
    ScalarConverter::convert("'c'");
    
    std::cout << "\n=== Test 2: int ===" << std::endl;
    ScalarConverter::convert("42");
    
    std::cout << "\n=== Test 3: float ===" << std::endl;
    ScalarConverter::convert("42.0f");
    
    std::cout << "\n=== Test 4: double ===" << std::endl;
    ScalarConverter::convert("42.0");
    
    std::cout << "\n=== Test 5: negative int ===" << std::endl;
    ScalarConverter::convert("-42");
    
    std::cout << "\n=== Test 6: float with -inf ===" << std::endl;
    ScalarConverter::convert("-inff");
    
    std::cout << "\n=== Test 7:negativ float -4.2f  ===" << std::endl;
    ScalarConverter::convert("-4.2f");
    
    std::cout << "\n=== Test 8: nan float ===" << std::endl;
    ScalarConverter::convert("nanf");
    
    std::cout << "\n=== Test 9: nan double ===" << std::endl;
    ScalarConverter::convert("nan");
    
    std::cout << "\n=== Test 10: invalid input ===" << std::endl;
    ScalarConverter::convert("invalid");
    

	std::cout << "\n=== Test of subject ===" << std::endl;
	std::cout << "Test: 0===" << std::endl;
    ScalarConverter::convert("0");
	std::cout << "Test: nan ===" << std::endl;
	ScalarConverter::convert("nan");

	std::cout << "Test: 42.0f===" << std::endl;
	ScalarConverter::convert("42.0f");

	
    return (0);
}