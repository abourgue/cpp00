/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgue <abourgue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:55:47 by abourgue          #+#    #+#             */
/*   Updated: 2023/10/07 13:52:03 by abourgue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{	
}

void	PhoneBook::addContact()
{
	static int i;
	
	this->contacts[i % 8].init();
	this->contacts[i % 8].setIndex(i % 8);
	i++;
	return;
}

void	PhoneBook::printContacts()
{
	for (int i = 0; i < 8; i++)
		this->contacts[i].printContact(i);
	return;
}

void	PhoneBook::printSpecificContact(void)
{
	int	id = 9;
	
	while (1)
	{
		std::cout << "Please enter the contact index: " << std::flush;
		std::cin >> id;
		if (id <= 8 && id >= 0)
			break;
		std::cin.clear();
	}
	this->contacts[id].printInfos(id);
	return;
}