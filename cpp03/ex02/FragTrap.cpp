/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:35:32 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 12:34:25 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_Hp = 100;
	this->_Ep = 100;
	this->_Ad = 30;
	std::cout << "FragTrap " << this->_name << " is born!" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is died! =>	";
	return;
}

void	FragTrap::highFivesGuys()
{
	if ( this->_Ep <= 0 ) {
        std::cout << "FragTrap " << this->_name << " is out of energy." << std::endl;
    } else {
		std::cout << "FragTrap " << this->_name << " high fives everybody." << std::endl;
		this->_Ep -= 1;
	}
	return;
}