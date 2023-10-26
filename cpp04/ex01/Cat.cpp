/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:28:47 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/23 14:06:51 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default - [Cat] - Constructor called" << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout << "Default - [Cat] - Destructor called" << std::endl;
	return;
}

void	Cat::makeSound() const
{
	std::cout << "Meooooww !!!" << std::endl;
	return;
}