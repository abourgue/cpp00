/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:59:16 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 14:03:05 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default - [Animal] - Constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Copy - [Animal] - Constructor called" << std::endl;
	*this = rhs;
	return;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Param - [Animal] - Constructor called" << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << "Default - [Animal] - Destructor called" << std::endl;
	return;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "[Animal] - Assignment operator called" << std::endl;
	this->setType(src.getType());
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makeSound called" << std::endl;
	return;
}

std::string	Animal::getType() const
{
	return this->_type;
}

void	Animal::setType(const std::string type)
{
	this->_type = type;
	return;
}