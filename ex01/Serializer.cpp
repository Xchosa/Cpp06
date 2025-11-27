/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:46:31 by poverbec          #+#    #+#             */
/*   Updated: 2025/11/25 16:31:11 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


const Serializer& Serializer::operator=(const Serializer &object) 
{ 
    (void)object; 
    return (*this); 
}

Serializer::Serializer(const Serializer &object)
{ 
    (void)object; 
}

// reinterpret memory as 
uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}


Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}