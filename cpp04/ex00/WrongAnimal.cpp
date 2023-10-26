/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:59:16 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/24 09:37:15 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "Default - [WrongAnimal] - Constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "Copy - [WrongAnimal] - Constructor called" << std::endl;
	*this = rhs;
	return;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "Param - [WrongAnimal] - Constructor called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default - [WrongAnimal] - Destructor called" << std::endl;
	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "[WrongAnimal] - Assignment operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound called" << std::endl;
	return;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::setType(const std::string type)
{
	this->_type = type;
	return;
}