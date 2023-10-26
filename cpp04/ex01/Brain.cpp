/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:48:11 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/24 10:00:44 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created !!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed !!" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy !!" << std::endl;
	*this = src;
	return;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}