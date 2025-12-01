/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:36:50 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 11:11:30 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <thread> 
#include <chrono> 

int main()
{
	srand(time(0));
	Base *test_1;
	Base *test_2;
	Base *test_3;

	std::cout << "==== test generating random classes ====" << std::endl;
	test_1 = generate();
	std::this_thread::sleep_for(std::chrono::milliseconds(70));
	test_2 = generate();
	
	
	std::cout << "==== identify Test 1 ====" << std::endl;
	identify(test_1);
	std::cout << "==== identify Test 2 ====" << std::endl;
	identify(test_2);
	std::cout << std::endl;
	std::cout << "==== identify Test 3 ====" << std::endl;
	test_3 = generate();
	identify(test_3);
	std::cout << std::endl;
	
	
	

	identify(*test_1);
	identify(*test_2);
	identify(*test_3);



	
	delete test_1;
	delete test_2;
	delete test_3;




	
	return 0;
	
	
}