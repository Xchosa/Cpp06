/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/25 17:05:13 by poverbec         ###   ########.fr       */
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