/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:32:15 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 14:07:41 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default - [Dog] - Constructor called" << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout << "Default - [Dog] - Destructor called" << std::endl;
	return;
}

void	Dog::makeSound() const
{
	std::cout << "Woooouuuuuffffff !!!" << std::endl;
	return;
}