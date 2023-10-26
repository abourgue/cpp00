/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:52 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/20 10:33:36 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called =>	";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hp(3), _Ep(2), _Ad(0)
{
	std::cout << "ClapTrap " << this->_name << ", is born !!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = rhs;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_Ad = rhs._Ad;
	this->_Ep = rhs._Ep;
	this->_Hp = rhs._Hp;
	this->_name = rhs._name;
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_Ep <= 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << ", attacks " << target << ", causing " << this->_Ad << " points of damage !!" << std::endl;
		this->_Ep -= 1;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hp - amount <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
		this->_Hp = amount = 0;
	} else {
		std::cout << "ClapTrap " << this->_name << " has take " << amount << " points of damage" << std::endl;
	}
	this->_Hp -= amount;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Ep <= 0) {
		std::cout << this->_name << " is out of energy !!";
	} else {
		this->_Ep -= 1;
		std::cout << this->_name << " has recover " << amount << " heal points !!";
		this->_Hp += amount;
	}
	return;
}