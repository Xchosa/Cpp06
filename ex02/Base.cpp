/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/27 09:43:24 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


//enum Alphabet
//	A,
//	B,
//	C
// as a free function no need to make it static or 
// instancable 
Base * generate(void)
{
	int random = rand() % 3;
	switch(random)
	{
		case(0): return new A();
		case(1): return new B();
		case(2): return new C();
		
	}
	return new C();
};
void identify(Base* p)
{

	std::cout << " ========== dynamik Dispatch polymorphic check ========= "<< std::endl;
	if(dynamic_cast<A*>(p))
		std::cout << "dynamic cast: "<< "'A'"<< std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "dynamic cast: "<< "'B'"<< std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "dynamic cast: "<< "'C'"<< std::endl;
	

	std::cout << " ============= Runtime check ========= "<< std::endl;
	if(typeid(*p) == typeid(A))
		std::cout <<  "runtime id "<< "'A'" << std::endl;
	else if(typeid(*p) == typeid(B))
		std::cout <<  "runtime id "<< "'B'" << std::endl;
	else if(typeid(*p) == typeid(C))
		std::cout <<  "runtime id "<< "'C'" << std::endl;
}