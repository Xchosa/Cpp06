/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 11:09:59 by poverbec         ###   ########.fr       */
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

	std::cout << " ========== Polymorphic check safe threat as subclass ========= "<< std::endl;
	if(dynamic_cast<A*>(p))
		std::cout << "1. dynamic cast: "<< "'A'"<< std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "2. dynamic cast: "<< "'B'"<< std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "3. dynamic cast: "<< "'C'"<< std::endl;
		
	

	std::cout << " ============= exact Identiy ========= "<< std::endl;
	if(typeid(*p) == typeid(A))
		std::cout <<  "runtime id "<< "'A'" << std::endl;
	else if(typeid(*p) == typeid(B))
		std::cout <<  "runtime id "<< "'B'" << std::endl;
	else if(typeid(*p) == typeid(C))
		std::cout <<  "runtime id "<< "'C'" << std::endl;
}


void identify(Base& p)
{
	try{
		A& refA = dynamic_cast<A&>(p);
		
		
		std::cout << &refA << " pointer is class" << "'A'" << std::endl;
		return ;
	}
	catch( std::bad_cast &refA){
	}

	try{
		B& refB = dynamic_cast<B&>(p);
		std::cout  << &refB <<  " pointer is class" << "'B'" << std::endl;
		return;
	}
	catch( std::bad_cast &refB){
	}

	try{
		C& refC = dynamic_cast<C&>(p);
		std::cout  << &refC << " pointer is class" << "'C'" << std::endl;
		return ;
	}
	catch( std::bad_cast &refC){
	}
}
