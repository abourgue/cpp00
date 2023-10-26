/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:03:08 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/10 17:04:08 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	setType(str);	
}

Weapon::~Weapon()
{
	
}

std::string Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string type){
	this->_type = type; 
	return;
}