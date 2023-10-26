/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:28:47 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/24 09:40:05 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default - [WrongCat] - Constructor called" << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "Default - [WrongCat] - Destructor called" << std::endl;
	return;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meoooow !!!" << std::endl;
	return;
}