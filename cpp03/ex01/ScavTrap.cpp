/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:43:04 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/20 10:30:59 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_Hp = 100;
	this->_Ep = 50;
	this->_Ad = 20;
	std::cout << "ScavTrap " << this->_name << " is born!" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = rhs;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " is died! =>	";
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_Hp = rhs._Hp;
	this->_Ep = rhs._Ep;
	this->_Ad = rhs._Ad;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_Ep <= 0) {
		std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name << ", attacks " << target << ", causing " << this->_Ad << " points of damage!" << std::endl;
		this->_Ep -= 1;
	}
	return;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
	return;
}