/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:53 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/27 09:34:15 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <random>
#include <iostream>

#include <typeinfo>

class Base
{
	public:
	virtual ~Base(){};
};

Base *generate(void);

void identify(Base* p);
//It prints the actual type of 
//the object pointed to by p: "A", "B", or "C".

class A : public Base
{
	~A(){};
};

class B : public Base
{
	~B(){};
};


class C : public Base
{
	~C(){};
};
