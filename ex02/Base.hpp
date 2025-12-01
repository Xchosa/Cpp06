/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:35:53 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/01 11:04:44 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <random>
#include <iostream>


#include <exception> 

class Base
{
	public:
	virtual ~Base(){};
};

Base *generate(void);

void identify(Base* p);
void identify(Base& p);


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
