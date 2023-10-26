/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:06:10 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/09 14:41:14 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	std::cout << "destructor called" << std::endl;
}

std::string	Zombie::getname(void) const
{
	return this->_name;
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->getname() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}