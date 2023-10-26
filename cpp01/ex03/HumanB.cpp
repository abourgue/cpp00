/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:02:49 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/10 17:25:45 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
	
}

void	HumanB::attack() const
{
	if (!(this->_weapon))
        std::cout << this->_name << " attacks with no weapon " << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}